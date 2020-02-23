/*
 * @Author: your name
 * @Date: 2020-02-04 13:45:26
 * @LastEditTime : 2020-02-04 14:06:39
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unti-5/14.c
 */
#include <stdio.h>
#include <math.h>
int main()
{
    // 牛顿迭代法
    // f(x) = 2*x^3 - 4*x^2 + 3x - 6 = 0
    // f(x) = ((2x-4)*x + 3) * x - 6
    // f'(x) = 6*x^2 - 8*x + 3
    // x1 = x0 - f(x0)/f'(x0)
    double x1 = 1.5, x0, f, f1;
    do
    {
        x0 = x1;
        f = 2 * x0 * x0 * x0 - 4 * x0 * x0 + 3 * x0 - 6;
        f1 = 6 * x0 * x0 - 8 * x0 + 3;
        x1 = x0 - f / f1;
    } while (fabs(x1 - x0) > 1e-5);
    printf("%lf\n", x1);
    return 0;
}