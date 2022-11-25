#include "../s21_math.h"

/*
 * #1
 * вычисляет абсолютное значение целого числа
 * */
int s21_abs(int x) {
  int result = 0;
    if(x > 0) result = x;
    else if(x < 0) result = x * (-1);
  return result;
}