cmake_minimum_required (VERSION 2.6)

project (HotRodPrototipo C CXX)

include_directories ("${CMAKE_CURRENT_SOURCE_DIR}/src")
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/src")


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

# Select driver
if(HOTROD_WINAPI)
  set (platform_sources src/hotrod/sys/windows/Socket.cpp)
else(HOTROD_WINAPI)
  set (platform_sources src/hotrod/sys/posix/Socket.cpp)
endif(HOTROD_WINAPI)


add_executable (simple src/Main.cpp)
target_link_libraries (simple lib/hotrod)
