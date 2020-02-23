/*
 * @Author: your name
 * @Date: 2020-02-22 14:43:18
 * @LastEditTime: 2020-02-22 15:29:55
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-10/3.c
 */
#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;
    char temp;

    temp = getchar();
    while (temp != '!')
    {
        str[i] = temp;
        temp = getchar();
        i++;
    }

    for (int i = 0; i < 100; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    FILE *newfile;
    if ((newfile = fopen("test", "w")) == NULL)
    {
        printf("create file fail!!!\n");
        return 0;
    }
    fputs(str, newfile);
    fclose(newfile);
    return 0;
}
