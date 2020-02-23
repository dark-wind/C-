/*
 * @Author: your name
 * @Date: 2020-02-06 19:36:02
 * @LastEditTime : 2020-02-06 19:37:45
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/eg/arr-test.c
 */
#include <stdio.h>

int lineSum(int a[3][3], int line)
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum = sum + a[line][i];
    }
    return sum;
}

int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum = lineSum(a,3);
    return 0;
}