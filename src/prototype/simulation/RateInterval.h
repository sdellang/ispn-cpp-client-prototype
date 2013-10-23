#ifndef PROTOTYPE_ASYNCDB_RATEINTERVAL_H
#define PROTOTYPE_ASYNCDB_RATEINTERVAL_H

namespace prototype {
namespace simulation {

static long UNLIMITED_DURATION = -1;

class RateInterval
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

#endif /* PROTOTYPE_ASYNCDB_RATEINTERVAL_H */
