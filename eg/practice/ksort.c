/*
 * @Author: your name
 * @Date: 2020-02-16 22:02:18
 * @LastEditTime: 2020-02-16 22:02:18
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/eg/practice/ksort.c
 */
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("请输入3个数，以空格分开\n");
    scanf("%d %d %d", &a, &b, &c);
    int min = a;
    if (a < b && a < c)
    {
        printf("%d\n", a);
        if (b < c)
        {
            printf("%d\n", b);
            printf("%d\n", c);
        }
        else
        {
            printf("%d\n", c);
            printf("%d\n", b);
        }
    }
    else if (b < c && b < a)
    {
        printf("%d\n", b);
        if (a < c)
        {
            printf("%d\n", a);
            printf("%d\n", c);
        }
        else
        {
            printf("%d\n", c);
            printf("%d\n", a);
        }
    }
    else
    {
        printf("%d\n", c);
        if (a < b)
        {
            printf("%d\n", a);
            printf("%d\n", b);
        }
        else
        {
            printf("%d\n", b);
            printf("%d\n", a);
        }
    }

    return 0;
}