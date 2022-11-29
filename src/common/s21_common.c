#include "../s21_math.h"

long double s21_factorial(int x) {
  if (x < 0)
    return 1;
  else if (x == 0)
    return 1;
  else
    return x * s21_factorial(x - 1);
}

int s21_isnan(double x) {
    return x != x;
}

int s21_isinf(double x) {
    return !s21_isnan(x) && s21_isnan(x - x);
}