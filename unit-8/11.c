/*
 * @Author: your name
 * @Date: 2020-02-18 17:57:39
 * @LastEditTime: 2020-02-18 19:04:05
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-8/11.c
 */
#include <stdio.h>
#include <string.h>
void sort(char *str)
{
    char temp[10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (strcmp(str + i * 10, str + j * 10) < 0)
            {
                strcpy(temp, str + i * 10);
                strcpy(str + i * 10, str + j * 10);
                strcpy(str + j * 10, temp);
            }
        }
    }
}
int main()
{
    char str[10][10];
    for (int i = 0; i < 10; i++)
    {
        gets(str[i]);
    }
    printf("\n");
    sort(str);
    printf("-----------\n");
    for (int i = 0; i < 10; i++)
    {
        puts(str[i]);
    }

    return 0;
}