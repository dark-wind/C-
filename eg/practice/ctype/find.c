/*
 * @Author: your name
 * @Date: 2020-02-17 14:49:24
 * @LastEditTime: 2020-02-17 14:49:24
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/eg/practice/ctype/find.c
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[] = "hello fklsjl";
    char * find;
    find = strchr(str, ' ');
    if (find)
    {
        *find = '\0';
    }
    puts(str);
    return 0;
}