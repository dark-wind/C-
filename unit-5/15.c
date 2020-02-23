/*
 * @Author: your name
 * @Date: 2020-02-04 14:50:11
 * @LastEditTime : 2020-02-04 15:30:32
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unti-5/15.c
 */
#include <stdio.h>

double getFx(double x)
{
    return 2 * x * x * x - 4 * x * x + 3 * x - 6;
}
int main()
{
    // 2*x*x*x - 4*x*x + 3*x - 6 = 0
    double mid;
    double left, right, fx;
    int filter = 1;
    while (filter)
    {
        printf("请输入左右范围，以空格隔开\n");
        scanf("%lf %lf", &left, &right);
        if (getFx(left) * getFx(right) < 0)
        {
            filter = 0;
        }
        else
        {
            printf("该范围内无解，请重新输入\n");
        }
    }
    while (fabs(left - right) > 1e-3)
    {
        mid = (left + right) / 2;
        if (getFx(left) * getFx(mid) < 0)
        {
            // 有根，继续夹逼
            right = mid;
        }
        else
        {
            left = mid;
        }
    }
    printf("%lf\n",mid);
    return 0;
}