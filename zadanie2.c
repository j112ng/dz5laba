#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");

    double x, y, F;
    double a = 7.1e-9; // Это 7.1 * 10^-9
    double c = 2.0;

    printf("Введите x: ");
    scanf("%lf", &x);
    printf("Введите y: ");
    scanf("%lf", &y);

   
    double chislitel = pow(a, 5) + pow(sin(y - c), 4);

    double znamenatel = pow(sin(x + y), 3) + fabs(x - y);

    F = chislitel / znamenatel;

    printf("\nF(x, y) = %lf\n", F);

    return 0;
}