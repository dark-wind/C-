/*
 * @Author: your name
 * @Date: 2020-02-18 12:03:24
 * @LastEditTime: 2020-02-18 15:12:09
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-8/4.c
 */
#include <stdio.h>
#define COUNT_N 10
#define MOVE 3
void handle(int *arr, int n)
{
    int storage[MOVE];
    int j = 0;
    for (int i = COUNT_N - MOVE; i < n; i++)
    {
        storage[j] = arr[i];
        j++;
    }

    for (int i = COUNT_N; i >= MOVE; i--)
    {
        arr[i] = arr[i - MOVE];
    }

    for (int i = 0; i < MOVE; i++)
    {
        arr[i] = storage[i];
    }
}
int main()
{
    int arr[COUNT_N];
    for (int i = 0; i < COUNT_N; i++)
    {
        scanf("%d", &arr[i]);
    }
    handle(arr, COUNT_N);
    for (int i = 0; i < COUNT_N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}