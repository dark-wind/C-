/*
 * @Author: your name
 * @Date: 2020-02-18 11:07:52
 * @LastEditTime: 2020-02-18 11:16:09
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-8/1.c
 */
#include <stdio.h>
void swap(int * a, int * b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++)
        {
            if (a[i] > a[j])
            {
                swap(&a[i], &a[j]);
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n",a[i]);
    }
    
    return 0;
}