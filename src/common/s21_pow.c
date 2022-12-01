#include "../s21_math.h"
typedef struct power {
  long int num;
  long int znam;
} P;

long double s21_pow_exp_int(double base, int exp);
P* p_converter(double exp);
/*
 * #12
 * возводит число в заданную степень
 * */
long double s21_pow(double base, double exp) {
  long double result = base;
  long double marker = base;
  long int mm = exp;
  long double m = exp;
  //  if(base < 0 && exp > 0) {
  //        result = S21_INFINITY;
  if (base == 0 && exp < 0) {
    result = S21_INFINITY;
  } else if (base == 0 && !s21_isnan(exp)) {
    result = 0;
  } else if (base == 1) {
    result = 1;
  } else if (base == -1 && s21_isinf(exp)) {
    result = 1;
  } else if (exp == 0) {
    result = 1;
  } else if (exp == 1) {
    result = base;
  } else if (s21_isnan(base)) {
    result = S21_NAN;
  } else if (s21_isnan(exp)) {
    result = S21_NAN;
  } else if (s21_isinf(base) && exp > 0) {
    result = S21_INFINITY;
  } else if (s21_isinf(base) && exp < 0) {
    result = 0;
  } else if (s21_isinf(exp)) {
    result = S21_INFINITY;
  } else if (s21_fabs(exp) - s21_fabs((long double)((long int)exp)) > 0 &&
             s21_fabs(exp) - s21_fabs((long double)((long int)exp)) < S21_EPS) {
    result = s21_pow_exp_int(base, exp);
  } else {
    if (base < 0) {
      base = -1 * base;
      result = s21_exp(s21_log(base) * exp);
      if (s21_fmod(exp, 2) != 0) {
        result = -1 * result;
      }
    } else {
      result = s21_exp(s21_log(base) * exp);
    }
  }
  if (mm % 2 == 0 && marker < 0 && result < 0) {
    result *= -1;
  }

  if (!s21_isinf(result) && m - mm >= S21_EPS && marker < 0 && marker != -1) {
    result = S21_NAN;
  }
  if (!s21_isinf(result) && m + mm <= -S21_EPS && marker < 0 && marker != -1) {
    result = S21_NAN;
  }
  return result;
}

long double s21_pow_exp_int(double base, int exp) {
  long double result = base;

  if (exp == 0)
    result = 1;
  else if (exp == 1) {
    result = base;
  } else {
    while (exp > 1) {
      base = base * base;
      exp--;
    }
    result = base;
  }
  return result;
}
/*
 * Как возвести число в вещественную степень?
Все знают обычное возведение в степень ещё со школы.
"Икс в квадрате" = x * x
"Икс в кубе" = x * x * x
Казалось бы, что здесь может быть сложного?
Вот и функцию "x в степени y" все воспринимают как данность.
На самом деле, как вы собрались вычислить x в степени 1,2345?
В очередной раз возводя какое-нибудь число в вещественную степень
 ленивым вызовом типа Math.power(x, y), задумывались ли вы, какой колоссальный
пласт науки за этим стоит? Допустим, для дробных чисел это возможно: та степень,
 что наверху - это просто число,
 умноженное на себя столько раз, а та степень, что внизу - это просто корень
этой степени из получившегося числа. Корень - это операция уже сама по себе
нетривиальная. Если умножать число само на себя - это одноклеточная операция
(все знают таблицу умножения с детского сада), то брать корень из числа - это
вам уже не так просто... Поэтому раньше (в тёмные века) составляли толстенные
книженции - так называемые "таблицы" - посвященные, скажем, взятию корней
некоторых степеней из множества всевозможных чисел. Допустим, у нас есть такая
книга, и мы теперь можем возводить любые числа в дробные степени. С любыми
вещественными степенями можно выкрутиться, используя тот трюк, что любое
вещественное число можно "зажать" между двумя сколь угодно близко расположенными
дробными числами. Но мы-то с вами живём в продвинутом XXI-ом веке, и давно уже
придуманы взрослые методы вычисления любых степеней любых чисел. Для начала
рассмотрим выражение "a ^ x" (а в степени икс). Для степеней есть тождество
(легко доказуемое простым раскрытием степени): (a ^ x) ^ y = a ^ (xy) Теперь, по
определению "логарифма" (называемому также "основным логарифмическим
тождеством") имеем: a ^ x = (b ^ log b (a) ) ^ x = b ^ (log b (a) * x) Казалось
бы, от чего ушли, к тому и пришли - к необходимости вычислить теперь уже "b ^
x". Однако, здесь можно применить хитрость: поскольку b мы можем выбрать любым,
то выберем его равным некоторому очень особенному числу e. Число e мы определим
как такое число, для которого производная функции "e в степени x" всегда равна
самой себе: А это значит, что используя разложение в "ряд Тейлора"  (открытое
ещё веке этак в XVII-ом), мы можем вычислить любую вещественную степень числа e:
Этот ряд "сходится", то есть каким бы большим ни было число x, в будущем
найдётся такое n, начиная с которого каждый новый член ряда будет меньше
предыдущего. (например, при x = 10 пятый член ряда ещё велик и приближённо равен
10 ^ 5 / 120 ~= 10 ^ 3, но уже сотый член практически исчезающе мал: 10 ^ 100 /
100! ~= 10 ^ 100 / 10 ^ 158 ~= 10 ^ –58) Поэтому, дойдя до нужного n, и получив
таким образом достаточную точность, мы можем остановиться. Отсюда, кстати, можно
найти и само число e, положив x = 1 (и получить, что e = 2,7182818...). Таким
образом, получаем, что a ^ x = e ^ (ln a * x), и осталось вычислить "натуральный
логарифм" числа a. По определению "натурального логарифма": Если теперь
продифференцировать это уравнение, то можно найти, что производная ln(x)
равняется 1/x. И теперь уже можно найти натуральный логарифм любого
вещественного числа, вычислив простейший интеграл (взяв площадь под кривой 1/x):
Эта задача называется "численным интегрированием", и способов численно вычислить
интеграл придуман уже целый вагон, так что задача нахождения значения
натурального логарифма решена. Делить, умножать, складывать и вычитать наш
вычислительный процессор уже умеет, поэтому задача решена, и вот только теперь,
по прошествии множества веков, мы, наконец, можем найти любую вещественную
степень любого вещественного числа. Ощущаете в себе гордость за человечество?

* для вычисления "экспоненты" (e в степени x) на компьютере применяется очень
остроумный трюк с разложением x в
 * двоичной системе исчисления, после которого всё сводится к перемножению уже
заранее известных табличных значений
 * e ^ (±2 ^ ±k), где k изменяется от 0 до максимального количества двоичных
разрядов в числах данного компьютера
 * (для double это 48 для обычного компьютера)
 * */