#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");

    double x, y, z, phi;

    printf("Введите x: "); //  -2.235e-2 по заданию
    scanf("%lf", &x); 
    printf("Введите y: "); // 2,23
    scanf("%lf", &y); 
    printf("Введите z: "); // 15,221
    scanf("%lf", &z); 

    
    
    double chislitel = exp(fabs(x - y)) * pow(fabs(x - y), x + y); // exp - e^x, fabs - модуль, pow - степень, atan - арктангенс
    double znamenatel = atan(x) + atan(z);

    double koren = pow(pow(x, 6) + pow(log(y), 2), 1.0 / 3.0);

    phi = (chislitel / znamenatel) + koren;

    printf("\nЗначение phi = %.3lf\n", phi);

    return 0;
}