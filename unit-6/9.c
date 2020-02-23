/*
 * @Author: your name
 * @Date: 2020-02-08 11:00:38
 * @LastEditTime : 2020-02-08 11:11:28
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-6/9.c
 */
#include <stdio.h>

void halfFind(int *a, int low, int high, int x)
{
    int mid, flag = 1;
    while (low <= high)
    {
        mid = (high + low) / 2;
        if (a[mid] == x)
        {
            printf("%d 是第 %d 个元素\n", a[mid], mid);
            flag = 0;
            break;
        }
        else if (a[mid] > x)
        {
            high = mid - 1;
        }
        else if (a[mid] < x)
        {
            low = mid + 1;
        }
    }
    if (flag)
    {
        printf("无此数\n");
    }
}

int main()
{
    int a[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16};
    int x;
    scanf("%d", &x);
    halfFind(a, 0, 14, x);

    return 0;
}