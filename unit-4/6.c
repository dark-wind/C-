/*
 * @Author: your name
 * @Date: 2020-02-02 11:55:40
 * @LastEditTime : 2020-02-02 14:36:01
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-4/6.c
 */
#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d", &x);
    if (x < 1)
    {
        y = x;
    }
    else if (x >= 1 && x < 10)
    {
        y = 2 * x - 1;
    }
    else if (x >= 10)
    {
        y = 3 * x - 11;
    }
    printf("y = %d\n", y);
    return 0;
}