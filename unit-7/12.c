/*
 * @Author: your name
 * @Date: 2020-02-14 11:34:34
 * @LastEditTime : 2020-02-14 11:59:30
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-7/12.c
 */
#include <stdio.h>
#include<math.h>
double getroot(){
    double x0 = 1, x1;
    double fx;
    double f1x;
    double a, b, c, d;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    do
    {
        x0 = x1;
        fx = a * x0 * x0 * x0 + b * x0 * x0 + c * x0 + d;
        f1x = 3 * a * x0 * x0 + 2 * b * x0 + c;
        x1 = x0 - fx / f1x;
    } while (fabs(x1 - x0) > 1e-3);
    return x1;
}
int main()
{
    // a=1 b=2 v=3 d=4
    // f(x) = a*x^3 + b*x^2 + c*x + d = 0
    // f'(x) = 3*a*x^2 + 2*b*x + c
    // x1 = x0 - f(x0)/f'(x0)
    double x1=getroot();

    printf("%lf\n", x1);
    return 0;
}