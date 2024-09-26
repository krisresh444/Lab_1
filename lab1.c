#include <stdio.h>
int main()
{
    float a, b, x;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &x);
    float max;

    if (a!=b)
    {
        if (a>b)
            max = a;
        else
            max = b;
        if (max>x)
            printf("%f - max - x",max-x);
            //printf(max-x);
        else
            printf("%f - max + x",max+x);
            //printf(max+x);
        }
    else
        printf("a и b равны\n");
    return 0;
}