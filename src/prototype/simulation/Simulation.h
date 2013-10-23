#ifndef PROTOTYPE_SIMULATION_SIMULATION_H
#define PROTOTYPE_SIMULATION_SIMULATION_H

namespace prototype {
namespace simulation {

template<typename W> class Simulation 
{
    void operator()() {}
};

template<typename W> class RateInterval
{
  public:
    RateInterval(
        int frequency,
        long duration = UNLIMITED_DURATION);

    int getFrequency() const;
    long getDuration() const;

  private:
    int frequency;
    long duration;
};

}} // namespace prototype::simulation

#endif /* PROTOTYPE_SIMULATION_SIMULATION_H */
