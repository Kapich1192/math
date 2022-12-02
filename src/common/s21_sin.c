#include "../s21_math.h"
/*
 * #13
 * вычисляет синус
 * */
long double s21_sin(double x) {
  long double result = 0;
  int s = 1;

  if (s21_isinf(x)) {
    result = S21_NAN;
  } else if (s21_isnan(x)) {
    result = S21_NAN;
  } else if (x - S21_PI >= 0 && x - S21_PI < S21_EPS) {
    result = 1e-50;
  } else if (x == -S21_PI) {
    result = -1e-50;
  } else {
    if (x < 0) {
      x = -x;
      s = -1;
    }
    for (int i = 0; i < 32; i++) {
      result +=
          s21_pow(-1, i) * s21_pow(x, 2 * i + 1) / s21_factorial(2 * i + 1);
    }
  }
  return result * s;
}