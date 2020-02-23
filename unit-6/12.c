/*
 * @Author: your name
 * @Date: 2020-02-08 11:49:20
 * @LastEditTime : 2020-02-08 12:43:50
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-6/12.c
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char str[10];
    int temp_num;
    int rand_num;
    // 随机生成字符串
    //  0-127是ascii
    srand(time(NULL));
    printf("密码为:\t");

    for (int i = 0; i < 10; i++)
    {
        rand_num = rand();
        if (rand_num % (i + 1) == 0)
        {
            str[i] = (rand() % 26) + 97;
        }
        else
        {
            str[i] = (rand() % 26) + 65;
        }
        printf("%c", str[i]);
    }
    printf("\n");
    printf("原文为:\t");

    for (int j = 0; j < 10; j++)
    {
        if (str[j] >= 'a' && str[j] <= 'z')
        {
            temp_num = str[j] - 'a';
            if (temp_num > 13)
            {
                temp_num = 'z' - str[j];
                temp_num = 'a' + temp_num;
            }
            if (temp_num < 13)
            {
                temp_num = 'z' - temp_num;
            }
            if (temp_num == 13)
            {
                temp_num = (int)str[j];
            }
            str[j] = temp_num;
            printf("%c", str[j]);
        }
        if (str[j] >= 'A' && str[j] <= 'Z')
        {
            temp_num = str[j] - 'A';
            if (temp_num > 13)
            {
                temp_num = 'Z' - str[j];
                temp_num = 'A' + temp_num;
            }
            if (temp_num < 13)
            {
                temp_num = 'Z' - temp_num;
            }
            if (temp_num == 13)
            {
                temp_num = (int)str[j];
            }
            str[j] = temp_num;
            printf("%c", str[j]);
        }
    }
    printf("\n");

    return 0;
}