#ifndef PROTOTYPE_SIMULATION_SCHEDULER_H
#define PROTOTYPE_SIMULATION_SCHEDULER_H

#include "prototype/simulation/Worker.h"
#include "prototype/simulation/Rate.h"

namespace prototype {
namespace simulation {

class Scheduler
{
  public:
    Scheduler(const std::vector<Worker*>& workers, const Rate& rate);
    void operator()();

  private:
    Rate rate;
    std::vector<Worker*> workers;
};

}} // namespace prototype::simulation

#endif /* PROTOTYPE_SIMULATION_SCHEDULER_H */
