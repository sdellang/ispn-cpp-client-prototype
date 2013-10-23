cmake_minimum_required (VERSION 2.6)

project (HotRodPrototipo CXX)

set(Boost_USE_STATIC_LIBS OFF) 
set(Boost_USE_MULTITHREADED ON)  
set(Boost_USE_STATIC_RUNTIME OFF) 
find_package(Boost 1.50.0 COMPONENTS system thread filesystem iostreams random timer) 
if(Boost_FOUND)
    Message("Boost FOUND")
endif()
include_directories ("${CMAKE_CURRENT_SOURCE_DIR}/src")

if (CMAKE_COMPILER_IS_GNUCXX)
   set (COMPILER_FLAGS "-fvisibility=hidden -fvisibility-inlines-hidden")
# ZZZ fix swig call for -Werror 
   set (WARNING_FLAGS
        "-pedantic -Wall -Wextra -Wno-shadow -Wpointer-arith -Wcast-qual -Wcast-align -Wno-long-long -Wvolatile-register-var -Winvalid-pch -Wno-system-headers -Woverloaded-virtual -Wshadow -Wl,--no-undefined")
endif (CMAKE_COMPILER_IS_GNUCXX)

if (MSVC)
   set (COMPILER_FLAGS "")
   set (WARNING_FLAGS "")
endif (MSVC)

if (NOT DEFINED COMPILER_FLAGS)
    message(FATAL_ERROR "Compiler flags not set for this build type")
endif (NOT DEFINED COMPILER_FLAGS)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${COMPILER_FLAGS} ${WARNING_FLAGS}")

if(WIN32 AND NOT CYGWIN)
  # linking against Windows native libraries, including mingw
  set (HOTROD_WINAPI TRUE)
  set (platform_libs ws2_32 Rpcrt4)
endif(WIN32 AND NOT CYGWIN)

add_library (
  prototype SHARED
  src/prototype/simulation/Rate.cpp
  src/prototype/simulation/RateInterval.cpp
  src/prototype/simulation/RateIter.cpp
  src/prototype/simulation/Scheduler.cpp
  src/prototype/simulation/Worker.cpp
  src/prototype/util/CsvReader.cpp
  src/prototype/util/CsvRowsIter.cpp
  src/prototype/util/CsvWriter.cpp
  src/prototype/util/Random.cpp
)


add_executable (prototest test/Random2.cpp)

find_library(HOTROD NAMES libhotrod.so HINTS ${CMAKE_CURRENT_SOURCE_DIR}/lib)
target_link_libraries (prototype ${HOTROD} ${platform_libs} ${Boost_LIBRARIES} rt)
target_link_libraries (prototest prototype)
add_test(prototest prototest)
