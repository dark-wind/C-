/*
 * @Author: your name
 * @Date: 2020-02-18 15:59:11
 * @LastEditTime: 2020-02-18 16:03:25
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-8/7.c
 */
#include <stdio.h>
#define N 10
#define M 3

int main()
{
    char from[N] = "abcdefghi";
    char to[N];
    int i = M;
    int j = 0;
    while (*(from + i) != '\0')
    {
        to[j] = *(from + i);
        i++;
        j++;
    }
    printf("%s\n", to);

    return 0;
}