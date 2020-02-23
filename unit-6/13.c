/*
 * @Author: your name
 * @Date: 2020-02-08 12:45:24
 * @LastEditTime : 2020-02-08 12:52:18
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-6/13.c
 */
#include <stdio.h>

int main()
{
    char str1[] = "jjkl2j4jk2fsdfd";
    char str2[] = "21341jk2uhfsoiufo";
    char str[100];
    int i = 0;
    for (; i < sizeof(str1) / sizeof(char); i++)
    {
        str[i] = str1[i];
    }
    // -1是为了干掉上一个字符串的结尾符号 /0
    for (int j = 0; j < sizeof(str2) / sizeof(char); j++)
    {
        str[i - 1 + j] = str2[j];
    }
    printf("%s\n", str);

    return 0;
}