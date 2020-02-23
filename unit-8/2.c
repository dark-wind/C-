/*
 * @Author: your name
 * @Date: 2020-02-18 11:16:42
 * @LastEditTime: 2020-02-18 11:49:36
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-8/2.c
 */
#include <stdio.h>
#include <string.h>

void swapAddress(char **a,char **b)
{
    int *temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    char str[3][100];
    for (int i = 0; i < 3; i++)
    {
        scanf("%s", str[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++)
        {
            if (strcmp(str[i], str[j])>0)
            {
                swapAddress(&str[i], &str[j]);
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", str[i]);
    }

    return 0;
}