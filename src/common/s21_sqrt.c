#include "../s21_math.h"
/*
 * #14
 * вычисляет квадратный корень
 * */
long double s21_sqrt(double x) {
  long double result = x;
  if (s21_isnan(x)) {
    result = x;
  } else if (x < 0) {
    result = S21_NAN;
  } else if (x == 0) {
    result = 0;
  } else if (x == 1) {
    result = 1;
  } else if (x > 0) {
    long double a = 0;
    long double b;

    if (x > 1)
      b = x;
    else
      b = 1;

    long double c = (a + b) / 2;
    while (c - a > S21_EPS) {
      if (c * c > x) {
        b = c;
      } else {
        a = c;
      }
      c = (a + b) / 2;
    }
    result = c;
  }
  return result;
}