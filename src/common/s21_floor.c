#include "../s21_math.h"
/*
 * #9
 * возвращает ближайшее целое число, не превышающее заданное значение
 * */
long double s21_floor(double x) {
  long double result = x;
    if(s21_isinf(x)) {
        result = x;
    } else if(x == 0) {
        result = 0;
    } else if(x > 0) {
        result = (long long int)x;
    } else if(x < 0) {
        result = (long long int)x - 1;
    }
  return result;
}