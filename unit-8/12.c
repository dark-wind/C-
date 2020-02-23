/*
 * @Author: your name
 * @Date: 2020-02-18 19:04:32
 * @LastEditTime: 2020-02-18 21:12:30
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-8/12.c
 */
#include <stdio.h>
#include <string.h>
void sort(char **str)
{
    char *temp;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (strcmp(str[i], str[j]) < 0)
            {
                temp = str[j];
                str[j] = str[i];
                str[i] = temp;
            }
        }
    }
}
int main()
{

    char *p[10] = {
        "a",
        "bb",
        "ccc",
        "dddd",
        "eeee",
        "fffff",
        "gggggg",
        "hhhhhhh",
        "iiiiiiiii",
        "hjjjjjjjjj",
    };

    sort(p);
    printf("-----------\n");
    for (int i = 0; i < 10; i++)
    {
        puts(p[i]);
    }
    return 0;
}