/*
 * @Author: your name
 * @Date: 2020-02-04 12:10:22
 * @LastEditTime : 2020-02-04 12:42:27
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unti-5/10.c
 */
#include <stdio.h>

int main()
{
    float 分子 = 2, 分母 = 1, temp, sum;
    sum = 分子 / 分母;
    printf("1 %.0f / %.0f , \n",分子,分母);
    for (int i = 0; i < 20-1; i++)
    {
        temp = 分子;
        分子 = 分子 + 分母;
        分母 = temp;
        sum = sum + 分子 / 分母;
        printf("%d %.0f / %.0f , \n",i+2,分子,分母);
    }
    printf("%f\n", sum);
    return 0;
}