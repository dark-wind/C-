/*
 * @Author: your name
 * @Date: 2020-02-18 15:53:50
 * @LastEditTime: 2020-02-18 16:08:29
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-8/6.c
 */
#include <stdio.h>

int main()
{
    char str[100];
    gets(str);
    int i = 0;
    while (*(str + i) != '\0')
    {
        i++;
    }
    printf("长度为 %d\n", i);
    return 0;
}