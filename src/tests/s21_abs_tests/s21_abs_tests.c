#include "../s21_math_tests.h"

START_TEST(s21_abs_1) {
    ck_assert_int_eq(s21_abs(21), abs(21));
}
END_TEST

START_TEST(s21_abs_2) {
    ck_assert_int_eq(s21_abs(-21), abs(-21));
}
END_TEST

START_TEST(s21_abs_3) {
    ck_assert_int_eq(s21_abs(-2147483647), abs(-2147483647));
}
END_TEST

START_TEST(s21_abs_4) {
    ck_assert_int_eq(s21_abs(2147483647), abs(2147483647));
}
END_TEST

START_TEST(s21_abs_5) {
    ck_assert_int_eq(s21_abs(-0), abs(-0));
}
END_TEST

START_TEST(s21_abs_6) {
    ck_assert_int_eq(s21_abs(+0), abs(+0));
}
END_TEST

START_TEST(s21_abs_7) {
    ck_assert_int_eq(s21_abs((int)NAN), abs((int)NAN));
}
END_TEST

START_TEST(s21_abs_8) {
    ck_assert_int_eq(s21_abs((int)INFINITY), abs((int)INFINITY));
}
END_TEST

START_TEST(s21_abs_9) {
    ck_assert_int_eq(s21_abs((int)-INFINITY), abs((int)-INFINITY));
}
END_TEST

START_TEST(s21_abs_10) {
    ck_assert_int_eq(s21_abs(0), abs(0));
}
END_TEST

START_TEST(s21_abs_11) {
    ck_assert_int_eq(s21_abs(123), abs(123));
}
END_TEST

START_TEST(s21_abs_12) {
    ck_assert_int_eq(s21_abs(4456), abs(4456));
}
END_TEST

// Функция создания набора тестов.
Suite *s21_abs_suite_create(void)
{

    Suite *suite = suite_create("s21_abs");
    // Набор разбивается на группы тестов, разделённых по каким-либо критериям.
    TCase *tcase_core = tcase_create("Core of s21_abs");

    // Добавление теста в группу тестов.
    tcase_add_test(tcase_core, s21_abs_1);
    tcase_add_test(tcase_core, s21_abs_2);
    tcase_add_test(tcase_core, s21_abs_3);
    tcase_add_test(tcase_core, s21_abs_4);
    tcase_add_test(tcase_core, s21_abs_5);
    tcase_add_test(tcase_core, s21_abs_6);
    tcase_add_test(tcase_core, s21_abs_7);
    tcase_add_test(tcase_core, s21_abs_8);
    tcase_add_test(tcase_core, s21_abs_9);
    tcase_add_test(tcase_core, s21_abs_10);
    tcase_add_test(tcase_core, s21_abs_11);
    tcase_add_test(tcase_core, s21_abs_12);
    // Добавление теста в тестовый набор.
    suite_add_tcase(suite, tcase_core);

    return suite;
}

int test_abs(void) {
    //Создаем структуру и заполняем ее тест кейсами
    Suite *suite = s21_abs_suite_create();
    /*Создаем ранер тестов*/
    SRunner *suite_runner = srunner_create(suite);
    srunner_run_all(suite_runner, CK_NORMAL);
    // Получаем количество проваленных тестов.
    int failed_count = srunner_ntests_failed(suite_runner);
    /*Освобождаем память*/
    srunner_free(suite_runner);
    if (failed_count != 0) {
        // Сигнализируем о том, что тестирование прошло неудачно.
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
