/*
 * @Author: your name
 * @Date: 2020-02-04 11:37:29
 * @LastEditTime : 2020-02-04 12:05:34
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unti-5/9.c
 */
#include <stdio.h>

int main()
{
    int sum;
    int arrs[100];
    int temp;
    for (int i = 1; i < 1000; i++)
    {
        temp = 0;
        sum = 0;
        memset(arrs, 0, sizeof(arrs));
        //找因子
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                arrs[temp] = j;
                temp++;
                sum = sum + j;
            }
        }
        if (sum == i)
        {
            printf("%d its factors are ",i);
            printf("%d",arrs[0]);
            for (int k = 1; k < 100; k++)
            {
                if (arrs[k] != 0)
                {
                    printf(",%d", arrs[k]);
                }
            }
            printf("\n");
        }
    }

    return 0;
}