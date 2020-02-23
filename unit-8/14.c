/*
 * @Author: your name
 * @Date: 2020-02-19 11:13:32
 * @LastEditTime: 2020-02-19 13:31:32
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-8/14.c
 */
#include <stdio.h>
void sort(char *num, int n)
{
    char temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = *(num + i);
        *(num + i) = *(num + n - i - 1);
        *(num + n - i - 1) = temp;
    }
}
#define N 10
int main()
{
    char num[N];
    int temp;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num[i]);
    }
    sort(num, N);
    for (int i = 0; i < N; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}