#include "../s21_math.h"
/*
 * #8
 * вычисляет абсолютное значение числа с плавающей точкой
 * */
long double s21_fabs(double x) {
  long double result = 0;
  if (x > 0)
    result = x;
  else if (x < 0)
    result = x * (-1);
  return result;
}