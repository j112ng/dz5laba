#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES 
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");

    double x, F;
    printf("Введите значение x: ");
    scanf("%lf", &x); 
    double part1 = (1.0 / 4.0) * pow(sin(3 * M_PI - 2 * x), 2);
    double part2 = pow(cos(5 * M_PI + 2 * x), 2);
    F = part1 * part2;
    printf("Ответ: %.1e\n", F);

    return 0;
}