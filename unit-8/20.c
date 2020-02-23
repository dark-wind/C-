/*
 * @Author: your name
 * @Date: 2020-02-19 20:24:50
 * @LastEditTime: 2020-02-19 20:29:13
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-8/20.c
 */
#include <stdio.h>
#include <string.h>

void sort(char **str)
{
    char *temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(str[i], str[j]) < 0)
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}
int main()
{
    char *str[5] = {
        "aaa",
        "bbb",
        "ccc",
        "ddd",
        "eee"};
    sort(str);
    for (int i = 0; i < 5; i++)
    {
        puts(str[i]);
    }

    return 0;
}