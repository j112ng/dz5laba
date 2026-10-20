# Домашнее задание

## Задание 1. Вариант 8

### Условие задачи
Создать программу вычисления указанной величины. 
Формула: φ = (e^|x-y| * |x-y|^(x+y)) / (arctg(x) + arctg(z)) + ³√(x^6 + ln²(y))
Результат проверить при заданных исходных значениях: x = -2.235e-2, y = 2.23, z = 15.221. Контрольный ответ: 39.374.

### 1. Алгоритм и блок-схема

**Алгоритм:**
1. Начало.
2. Объявить переменные: x, y, z
3. Вычислить числитель (chislitel).
4. Вычислить знаменатель (znamenatel).
5. Вычислить корень кубический (koren).
6. Вычислить общий результат (phi).
7. Вывести значение phi.
8. Конец.



<img width="382" height="777" alt="dz5laba" src="https://github.com/user-attachments/assets/5af4b9d1-9972-4cf3-a5fd-5cdf1effd6fd" />


### 2. Реализация программы

```c
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
```c
### 3.Результаты работы программы
Случай 1:
Введите x: -0,02235
Введите y: 2,23
Введите z: 15,221
Значение phi = 39,374
### 4. Информация о разработчике
Козлова София Сергеевна,бТИИ-261
