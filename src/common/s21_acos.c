#include "../s21_math.h"

/*
 * #2
 * вычисляет арккосинус
 * */
long double s21_acos(double x) {
  long double result = 0;
  if (x - 1 > 0 && x - 1 < S21_EPS) {
    result = 0;
  } else if (x == (-1)) {
    result = S21_PI;
  }

  return result;
}