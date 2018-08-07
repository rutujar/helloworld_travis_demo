#include "common.h"

inline void wAssert(bool cond, const char* msg)
{
  if(!cond)
    puts(msg);
  assert(cond);
}
int getRandomValue(int min, int max)
{
  if(!random_generator_seeded)
   srand(time(0));
  random_generator_seeded=true;
  int range=max-min;
  return min + rand() % range;
}
