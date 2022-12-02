#include "../s21_math.h"
/*
 * #6
 * вычисляет косинус
 * */
long double s21_cos(double x) {
  long double result = x;
  if (s21_isnan(x)) {
    result = S21_NAN;
  } else if (s21_isinf(x)) {
    result = S21_NAN;
  } else if (x == S21_PI) {
    result = -1;
  } else if (x == -S21_PI) {
    result = -1;
  } else {
    double n = 1.0;
    double sum = 0.0;
    int i = 1;

    do {
      sum += n;
      n *= -1.0 * s21_pow(x, 2) / ((2 * i - 1) * (2 * i));
      i++;
    } while (s21_fabs(n) > 0.0000000000000001);
    result = sum;
  }
  return result;
}