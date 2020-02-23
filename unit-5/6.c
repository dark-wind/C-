/*
 * @Author: your name
 * @Date: 2020-02-03 13:22:54
 * @LastEditTime : 2020-02-03 13:36:36
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unti-5/6.c
 */
#include <stdio.h>

int main()
{
    int n;
    double temp, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        temp = 1;
        for (int j = 1; j <= i; j++)
        {
            temp = temp * j;
        }
        sum += temp;
    }
    printf("%lf\n", sum);

    return 0;
}