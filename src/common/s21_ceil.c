#include "../s21_math.h"
/*
 * #5
 * возвращает ближайшее целое число, не меньшее заданного значения
 * */
long double s21_ceil(double x) {
  long double result = x;
  if(s21_isinf(x)) {
      result = x;
  } else if (x == 0) {
      result = 0;
  } else if (x > 0) {
      result = (long long int)x + 1;
  } else if (x < 0) {
      result = (long long int)x;
  }
  return result;
}