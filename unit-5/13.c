/*
 * @Author: your name
 * @Date: 2020-02-04 13:33:34
 * @LastEditTime : 2020-02-04 13:44:40
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unti-5/13.c
 */
#include <stdio.h>
#include <math.h>

int main()
{
    double x1, x2, a;
    int filter = 1;
    while (filter)
    {
        printf("请输入一个正数a\n");
        scanf("%lf", &a);
        if (a > 0)
        {
            filter = 0;
        }
        else
        {
            printf("超出范围，只能计算正数\n");
        }
    }
    x1 = sqrt(a);
    x2 = (x1 + a / x1) / 2;
    while (fabs(x1 - x2) > 1e-5)
    {
        x1 = x2;
        x2 = (x1 + a / x1) / 2;
    }
    printf("%lf\n", x2);
    return 0;
}