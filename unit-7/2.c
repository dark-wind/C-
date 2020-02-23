/*
 * @Author: your name
 * @Date: 2020-02-13 20:59:13
 * @LastEditTime : 2020-02-13 21:18:24
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-7/2.c
 */
#include <stdio.h>
#include <math.h>

double zuo;
double derta;
void zheng(double a, double b, double c)
{
    printf("x1 = %lf\n", zuo + sqrt(derta) / (2 * a));
    printf("x2 = %lf\n", zuo - sqrt(derta) / (2 * a));
}
void fu(double a, double b, double c)
{
    printf("x1 = %lf + %lf i\n", zuo , sqrt(-derta) / (2 * a));
    printf("x2 = %lf - %lf i\n", zuo , sqrt(-derta) / (2 * a));
}
void ling(double a, double b, double c)
{
    printf("x1 = x2= %lf\n", zuo );
}

int main()
{
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);
    derta = b * b - 4 * a * c;
    zuo = -b / (2 * a);
    if (derta > 0)
    {
        zheng(a, b, c);
    }
    if (derta < 0)
    {
        fu(a, b, c);
    }
    if (derta == 0)
    {
        ling(a, b, c);
    }

    return 0;
}