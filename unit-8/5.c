/*
 * @Author: your name
 * @Date: 2020-02-18 15:12:42
 * @LastEditTime: 2020-02-18 15:52:35
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-8/5.c
 */
#include <stdio.h>
#define COUNT_N 10

int main()
{
    int arr[COUNT_N] = {0};
    int count = COUNT_N;
    // i 指向未淘汰的人，j标记报数
    int i = 0, j = 1;

    while (count > 1)
    {
        if (i > COUNT_N)
        {
            i = 0;
        }
        if (j > 3)
        {
            j = 1;
        }
        //已淘汰，直接下一位
        if (arr[i])
        {
            i++;
            continue;
        }
        else
        {
            if (j == 3)
            {
                printf("淘汰 %d 号\n", i);
                arr[i] = 1;
                count--;
            }
            i++;
            j++;
        }
    }
    for (int i = 0; i < COUNT_N; i++)
    {
        if (arr[i] == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
