#include "../s21_math.h"
/*
 * #7
 * возвращает значение e, возведенное в заданную степень
 * */
long double s21_exp(double x) {
  long double result = x;
  if (x == 0) {
    result = 1;
  } else if (s21_isnan(x)) {
    result = S21_NAN;
  } else if (s21_isinf(x)) {
    result = S21_INFINITY;
  } else {
    long double dis = 1;
    long double ser = 1;
    long double i = 1;
    while (s21_fabs(dis) > S21_EPS) {
      dis *= x / i;
      i++;
      ser += dis;
      if (ser > S21_DBL_MAX) {
        ser = S21_INFINITY;
        break;
      }
    }
    result = ser;
  }
  return result;
}