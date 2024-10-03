# Лабораторная работа №1
## Требовалось (Вариант 11)
*В зависимости от того, что больше, вывести разность наибольшего из параметров a, b и параметра x, либо сумму наименьшего из параметров и параметра x. В случае равенства вывести соответствующее сообщение.*
## Ход работы
1. Разобрать код из примера и изучить палгоритм работы с `if`
2. Составить блок-схему для совего варианта
3. С помощью блок-схемы и программы преподавателя написать программу по совему варианту
4. Переместить в свой репозиторий на `Github`
## Код
```
#include <stdio.h>
int main()
{
    float a, b, x;
    printf("Enter a ->");
    scanf("%f", &a);
    printf("Enter b ->");
    scanf("%f", &b);
    printf("Enter x ->");
    scanf("%f", &x);
    float max;

    if (a!=b)
    {
        if (a>b)
            max = a;
        else
            max = b;
        if (max>x)
            printf("%f - max - x\n",max-x);
        if (max<x)
            printf("%f - max + x\n",(a+b-max)+x);
        if (max==x)
            printf("%f - a и b равны\n",max=x);
        }
    else
        printf(" - a и b равны\n");
    return 0;
}
```
## Скриншоты резельтата работы
<image src = 2024-09-26_13-32-15.png alt="блок-схема">
<image src = 2024-10-03_13-37-55.png alt="результат кода">

## Источники 
(https://programforyou.ru/block-diagram-redactor)
(https://evil-teacher.on.fleek.co/prog_pm/term1/lab01/)
(https://doka.guide/tools/markdown/)
