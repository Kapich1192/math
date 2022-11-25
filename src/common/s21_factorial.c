#include "../s21_math.h"

long double s21_factorial(int x) {
  if (x < 0)
    return 1;
  else if (x == 0)
    return 1;
  else
    return x * s21_factorial(x - 1);
}