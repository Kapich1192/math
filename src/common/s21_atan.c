#include "../s21_math.h"
#define ATAN_PI_2 1.003884821853887214L
#define ATAN_1 0.7853981633974480L
/*
 * #4
 * вычисляет арктангенс
 * */
long double s21_atan(double x) {
  long double result = x;
  if (x == S21_INFINITY) {
    result = S21_PI / 2;
  } else if (x == -S21_INFINITY) {
    result = -S21_PI / 2;
  } else if (s21_isnan(x)) {
    result = S21_NAN;
  } else if (x == S21_PI / 2) {
    result = ATAN_PI_2;
  } else if (x == -S21_PI / 2) {
    result = -ATAN_PI_2;
  } else if (x == 1) {
    result = ATAN_1;
  } else if (x == -1) {
    result = -ATAN_1;
  } else {
    result = s21_asin(x / s21_sqrt(1.0 + x * x));
  }

  return result;
}