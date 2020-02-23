/*
 * @Author: your name
 * @Date: 2020-02-06 18:13:39
 * @LastEditTime : 2020-02-06 18:17:22
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-6/5.c
 */
#include <stdio.h>

int main()
{
    int a[] = {8, 6, 5, 4, 1};
    int temp;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    int len = sizeof(a) / sizeof(a[0]);
    for (int j = 0; j < len / 2; j++)
    {
        temp = a[j];
        a[j] = a[len - j - 1];
        a[len - j - 1] = temp;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}