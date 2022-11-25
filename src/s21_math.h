#ifndef _S21_MATH_H_
#define _S21_MATH_H_
#define S21_PI 3.14159265358979323846
#define S21_E 2.71828182845904523536
/* -----------------> OK
 * #1
 * вычисляет абсолютное значение целого числа
 * */
int s21_abs(int x);

/*
 * #2
 * вычисляет арккосинус
 * */
long double s21_acos(double x);

/*
 * #3
 * вычисляет арксинус
 * */
long double s21_asin(double x);

/*
 * #4
 * вычисляет арктангенс
 * */
long double s21_atan(double x);

/*
 * #5
 * возвращает ближайшее целое число, не меньшее заданного значения
 * */
long double s21_ceil(double x);

/*
 * #6
 * вычисляет косинус
 * */
long double s21_cos(double x);

/*
 * #7
 * возвращает значение e, возведенное в заданную степень
 * */
long double s21_exp(double x);

/* -----------------> OK
 * #8
 * вычисляет абсолютное значение числа с плавающей точкой
 * */
long double s21_fabs(double x);

/*
 * #9
 * возвращает ближайшее целое число, не превышающее заданное значение
 * */
long double s21_floor(double x);

/*
 * #10
 * остаток операции деления с плавающей точкой
 * */
long double s21_fmod(double base, double exp);

/*
 * #11
 * вычисляет натуральный логарифм
 * */
long double s21_log(double x);

/*
 * #12
 * возводит число в заданную степень
 * */
long double s21_pow(double base, double exp);

/*
 * #13
 * вычисляет синус
 * */
long double s21_sin(double x);

/*
 * #14
 * вычисляет квадратный корень
 * */
long double s21_sqrt(double x);

/*
 * #15
 * вычисляет тангенс
 * */
long double s21_tan(double x);

/*+++++++++++++++++++++++++++++++++++++
 * # 16
 * вычисляет факториал числа
 * */
long double s21_factorial(int x);

#endif  // _S21_MATH_H_