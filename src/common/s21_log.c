#include "../s21_math.h"
/*
 * #11
 * вычисляет натуральный логарифм
 * */
long double s21_log(double x) {
  long double result = 0;
  int ep = 0;
  if (s21_isinf(x)) {
    result = S21_INFINITY;
  } else if (x == 0) {
    result = -1 * S21_INFINITY;
  } else if (x < 0) {
    result = S21_NAN;
  } else if (x == 1) {
    result = 0;
  } else {
    double compare = 0;

    for (; x >= S21_E; x /= S21_E) {
      ep++;
    }
    int i;
    for (i = 0; i < 100; i++) {
      compare = result;
      result = compare + 2 * (x - s21_exp(compare)) / (x + s21_exp(compare));
    }
  }
  return (result + ep);
}