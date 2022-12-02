#include "../s21_math.h"
/*
 * #15
 * вычисляет тангенс
 * */
long double s21_tan(double x) {
  long double result = 0;
  if (x == S21_PI / 2) {
    result = 16331239353195370L;
  } else if (x == -S21_PI / 2) {
    result = -16331239353195370L;
  } else if (x == 0) {
    result = 0;
  } else {
    result = s21_sin(x) / s21_cos(x);
  }
  return result;
}