/*
 * @Author: your name
 * @Date: 2020-02-13 11:23:53
 * @LastEditTime : 2020-02-13 11:34:29
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/eg/7.12selectSort.c
 */
#include <stdio.h>

int main()
{
    int a[10] = {45, 2, 9, 0, -3, 54, 12, 5, 66, 33};
    int min, temp;
    for (int i = 0; i < 10; i++)
    {
        min = i;
        for (int j = i + 1; j < 10; j++)
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}