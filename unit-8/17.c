/*
 * @Author: your name
 * @Date: 2020-02-19 19:35:20
 * @LastEditTime: 2020-02-19 19:43:28
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-8/17.c
 */
#include <stdio.h>
int strcmp(char *str1, char *str2)
{
    int i = 0;
    while (*(str1 + i) != '\0' && *(str2 + i) != '\0')
    {
        if (*(str1 + i) == *(str2 + i))
        {
            i++;
        }
        else
        {
            return *(str1 + i) - *(str2 + i);
        }
    }
    if (*(str1 + i) != '\0' && *(str2 + i) == '\0')
    {
        return (int)*(str1 + i);
    }
    else if (*(str1 + i) == '\0' && *(str2 + i) != '\0')
    {
        return (int)*(str2 + i);
    }
    else
    {
        return 0;
    }
}
int main()
{
    char str1[] = "BOY";
    char str2[] = "BAD";
    printf("%d\n", strcmp(str1, str2));
    return 0;
}