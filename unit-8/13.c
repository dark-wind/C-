/*
 * @Author: your name
 * @Date: 2020-02-18 21:21:20
 * @LastEditTime: 2020-02-19 11:09:19
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-8/13.c
 */
#include <stdio.h>
#include <math.h>

typedef double (*doubleFunc)(double x);
double getSin(double x)
{
    return sin(x);
}
double getCos(double x)
{
    return cos(x);
}
double getEx(double x)
{
    return exp(x);
}
double getArea(double a, double b, double n, doubleFunc func)
{
    double sum = 0; //面积
    double len;     //每小段长度
    len = (b - a) / n;
    for (int i = 0; i < 1000; i++)
    {
        sum = sum + len * func(a + i * len);
    }
    return sum;
}
int main()
{
    doubleFunc func = getSin;
    double a, b;     //上下限
    double n = 1000; //等分数
    scanf("%lf %lf", &a, &b);
    double sum;
    sum = getArea(a, b, n, func);
    printf("sinx = %lf\n", sum);

    func = getCos;
    sum = getArea(a, b, n, func);
    printf("cosx = %lf\n", sum);

    func = getEx;
    sum = getArea(a, b, n, func);
    printf("ex = %lf\n", sum);

    return 0;
}