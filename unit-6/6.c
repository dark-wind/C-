/*
 * @Author: your name
 * @Date: 2020-02-06 18:17:47
 * @LastEditTime : 2020-02-06 19:22:50
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-6/6.c
 */
#include <stdio.h>

int main()
{
    int a[10][10] = {0};
    //每行的第一个元素是1，最后一个元素是1
    for (int i = 0; i < 10; i++)
    {
        a[i][0] = 1;
        a[i][i] = 1;
    }
    for (int j = 1; j < 10; j++)
    {
        for (int k = 1; k < j; k++)
        {
            a[j][k]=a[j-1][k]+a[j-1][k-1];
        }
    }

    // 输出
    for (int j = 0; j < 10; j++)
    {
        for (int k = 0; k < 10; k++)
        {
            if (a[j][k] == 0)
            {
                printf(" ");
            }
            else
            {
                printf("%d ", a[j][k]);
            }
        }
        printf("\n");
    }

    return 0;
}