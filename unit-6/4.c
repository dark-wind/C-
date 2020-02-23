/*
 * @Author: your name
 * @Date: 2020-02-06 18:08:15
 * @LastEditTime : 2020-02-06 18:13:19
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-6/4.c
 */
#include <stdio.h>

int main()
{
    int a[6] = {1, 4, 6, 7, 8};
    int input;
    scanf("%d", &input);
    int i = 0;
    for (; i < 6; i++)
    {
        if (input >= a[i] && input <= a[i + 1])
        {
            break;
        }
    }
    for (int j = 5; j > i; j--)
    {
        a[j] = a[j - 1];
    }
    a[i + 1] = input;
    for (int k = 0; k < 6; k++)
    {
        printf("%d ", a[k]);
    }

    return 0;
}