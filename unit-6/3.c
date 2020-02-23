/*
 * @Author: your name
 * @Date: 2020-02-06 18:02:24
 * @LastEditTime : 2020-02-06 18:07:50
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-6/3.c
 */
#include <stdio.h>

int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum = sum + a[i][i];
    }
    printf("%d\n", sum);

    return 0;
}