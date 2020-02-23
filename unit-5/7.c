/*
 * @Author: your name
 * @Date: 2020-02-03 13:37:17
 * @LastEditTime : 2020-02-03 13:44:09
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unti-5/7.c
 */
#include <stdio.h>

int main()
{
    double k1 = 1, k2 = 1, k3 = 1;
    for (int i = 2; i < 101; i++)
    {
        k1 = k1 + i;
    }
    for (int i = 2; i < 51; i++)
    {
        k2 = k2 + i * i;
    }
    for (int i = 2; i < 11; i++)
    {
        k3 = k3 + (1 / (double)i);
    }
    printf("k1 = %lf\n", k1);
    printf("k2 = %lf\n", k2);
    printf("k3 = %lf\n", k3);
    printf("sum = %lf\n", k1 + k2 + k3);

    return 0;
}