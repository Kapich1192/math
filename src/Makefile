#Персонализация
USERNAME1= barbreye
USERNAME2=
USERNAME3=
USERNAME4=
USERNAME5=
EMAIL= barbrey@student.21-school.ru
BRANCH_NAME= develop
#Флаги
GCC= gcc
GCCG= gcc -g
FLAGS= -Wall -Werror -Wextra
TESTS_UBUNTU= -pthread -lcheck_pic -pthread -lrt -lm -lsubunit
GCOV_FLAGS= -fprofile-arcs -ftest-coverage -fPIC
#-fprofile-arcs -ftest-coverage
#файлы проекта
F_C_1= common/s21_abs.c  common/s21_acos.c common/s21_atan.c
F_C_2= common/s21_ceil.c common/s21_cos.c common/s21_exp.c
F_C_3= common/s21_fabs.c common/s21_floor.c common/s21_fmod.c
F_C_4= common/s21_log.c common/s21_pow.c common/s21_sin.c
F_C_5= common/s21_sqrt.c common/s21_tan.c common/s21_asin.c
F_C_COMMON = common/s21_factorial.c
F_H= s21_math.h
#Объектные файлы для создания статической библиотеки math.h
F_O_1= s21_abs.o s21_acos.o s21_asin.o
F_O_2= s21_atan.o s21_ceil.o s21_cos.o
F_O_3= s21_exp.o s21_fabs.o s21_floor.o
F_O_4= s21_fmod.o s21_log.o s21_pow.o
F_O_5= s21_sin.o s21_sqrt.o s21_tan.o
#файлы тестов
FT_H= tests/s21_math_tests.h
FT_C= tests/main.c
FT_C_1= tests/s21_abs_tests/s21_abs_tests.c tests/s21_acos_tests/s21_acos_tests.c tests/s21_asin_tests/s21_asin_tests.c
FT_C_2= tests/s21_atan_tests/s21_atan_tests.c tests/s21_ceil_tests/s21_ceil_tests.c tests/s21_cos_tests/s21_cos_tests.c
FT_C_3= tests/s21_exp_tests/s21_exp_tests.c tests/s21_fabs_tests/s21_fabs_tests.c tests/s21_floor_tests/s21_floor_tests.c
FT_C_4= tests/s21_fmod_tests/s21_fmod_tests.c tests/s21_log_tests/s21_log_tests.c tests/s21_pow_tests/s21_pow_tests.c
FT_C_5= tests/s21_sin_tests/s21_sin_tests.c tests/s21_sqrt_tests/s21_sqrt_tests.c tests/s21_tan_tests/s21_tan_tests.c
SOURCE_TESTS= -o test

all: clean s21_math.a test

# ======================================= Компиляция тестов ===========================================================
# -pthread -lcheck_pic -pthread -lrt -lm -lsubunit // флаги сообщающие путь к библиотеке check  убунту
test: clean s21_math.a
	${GCCG} ${FLAGS} ${FT_C_1} ${FT_C_2} ${FT_C_3} ${FT_C_4} ${FT_C_5} ${FT_C} s21_math.a ${SOURCE_TESTS} ${TESTS_UBUNTU} ${GCOV_FLAGS}
	./test
	gcovr *.gcda
	gcovr --html-details -o report.html
#	ar rc suite_cases.a ${FT_C_1} ${FT_C_2} ${FT_C_3} ${FT_C_4} ${FT_C_5}
#	ranlib suite_cases.a
#	${GCC} ${FLAGS} --coverage s21_math.a suite_cases.a ${SOURCE_TESTS} ${F_C_1} ${F_C_2} ${F_C_3} ${F_C_4} ${F_C_5} main.o -lcheck

# ======================================= Вывод тестов в HTML отчет ===================================================
gcov_report: test
	gcov *.gcno
	gcov *.gcda
	gcovr -o THISSSSS.html


# ======================================= Тесты на утечки =============================================================
tests_valgrind:
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose --log-file=res_leak.txt ./test
	grep -e ERROR res_leak.txt
# ======================================= Сборка библиотеки в файл s21_math.a =========================================
s21_math.a: clean.o clean.a s21_abs.o s21_acos.o s21_asin.o s21_atan.o s21_ceil.o s21_cos.o s21_exp.o s21_fabs.o s21_floor.o s21_fmod.o s21_log.o s21_pow.o s21_sin.o s21_sqrt.o s21_tan.o
	ar rc s21_math.a ${F_O_1} ${F_O_2} ${F_O_3} ${F_O_4} ${F_O_5}
	make clean.o
#1
s21_abs.o:
	gcc -c ${FLAGS} common/s21_abs.c
#2
s21_acos.o:
	gcc -c ${FLAGS} common/s21_acos.c
#3
s21_asin.o:
	gcc -c ${FLAGS} common/s21_asin.c
#4
s21_atan.o:
	gcc -c ${FLAGS} common/s21_atan.c
#5
s21_ceil.o:
	gcc -c ${FLAGS} common/s21_ceil.c
#6
s21_cos.o:
	gcc -c ${FLAGS} common/s21_cos.c
#7
s21_exp.o:
	gcc -c ${FLAGS} common/s21_exp.c
#8
s21_fabs.o:
	gcc -c ${FLAGS} common/s21_fabs.c
#9
s21_floor.o:
	gcc -c ${FLAGS} common/s21_floor.c
#10
s21_fmod.o:
	gcc -c ${FLAGS} common/s21_fmod.c
#11
s21_log.o:
	gcc -c ${FLAGS} common/s21_log.c
#12
s21_pow.o:
	gcc -c ${FLAGS} common/s21_pow.c
#13
s21_sin.o:
	gcc -c ${FLAGS} common/s21_sin.c
#14
s21_sqrt.o:
	gcc -c ${FLAGS} common/s21_sqrt.c
#15
s21_tan.o:
	gcc -c ${FLAGS} common/s21_tan.c

# ======================================= Работа со стилями в проекте =================================================
style:
	clang-format -n ${F_H} ${F_C_1} ${F_C_2} ${F_C_3} ${F_C_4} ${F_C_5} ${F_C_COMMON}
	clang-format -n ${FT_C} ${FT_H} ${FT_C_1} ${FT_C_2} ${FT_C_3} ${FT_C_4} ${FT_C_5} ${F_C_COMMON}
style_red:
	clang-format -i ${F_H} ${F_C_1} ${F_C_2} ${F_C_3} ${F_C_4} ${F_C_5} ${F_C_COMMON}
	clang-format -i ${FT_C} ${FT_H} ${FT_C_1} ${FT_C_2} ${FT_C_3} ${FT_C_4} ${FT_C_5} ${F_C_COMMON}

# ======================================= Git =========================================================================
git:
	git add .
	git commit -m "${BRANCH_NAME} --> ${USERNAME1} --> developing"
	git push origin master
# ======================================= Clean =======================================================================
clean.o:
	rm -rf *.o
clean.a:
	rm -rf *.a
clean:
	rm -rf *.o
	rm -rf *.a
	rm -rf test
	rm -rf *.gcno
	rm -rf *.gcda
	rm -rf *.gcov
	rm -rf *.txt
