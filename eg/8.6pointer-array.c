/*
 * @Author: your name
 * @Date: 2020-01-22 15:41:20
 * @LastEditTime : 2020-01-22 16:52:37
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/8.6pointer-array.c
 */
#include <stdio.h>

int main()
{
    int a[10];
    int i;
    printf("input 10 number:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    // for (i = 0; i < 10; i++)
    // {
    //     printf("%d\n", a[i]);
    // }
    for (i = 0; i < 10; i++)
    {
        printf("with *: %d\n", *(a+i));
        printf("without *:%d\n", (a+i));
    }
    return 0;
}
