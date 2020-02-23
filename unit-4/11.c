/*
 * @Author: your name
 * @Date: 2020-02-02 17:51:12
 * @LastEditTime : 2020-02-02 17:57:33
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-4/11.c
 */
#include <stdio.h>

int main()
{
    int a[4], temp;
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        for (int i = 0; i < 3; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}