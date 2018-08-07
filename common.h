#ifndef __COMMON_H
#define __COMMON_H

#include "assert.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

static bool random_generator_seeded=false;

void wAssert(bool cond, const char* msg);
int getRandomValue(int min, int max);

#endif
