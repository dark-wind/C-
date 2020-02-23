/*
 * @Author: your name
 * @Date: 2020-02-14 12:02:21
 * @LastEditTime : 2020-02-14 12:14:23
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-7/13.c
 */
#include <stdio.h>
double lrd(double x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n == 1)
    {
        return x;
    }
    else
    {
        return ((2 * n - 1) * x - lrd(x, n - 1) - (n - 1) * lrd(x, n - 2)) / n;
    }
}
int main()
{
    double x;
    int n = 0;
    double rs;
    do
    {
        scanf("%lf %d", &x, &n);
        rs = lrd(x, n);
        printf("%lf\n", rs);
    } while (n != 13);

    return 0;
}