#include "math.h"

int cipSkaits(int number) {
  if (!number)
    return 1;
  return floor(log10(abs(number)) + 1);
}
