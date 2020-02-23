/*
 * @Author: your name
 * @Date: 2020-02-12 11:33:14
 * @LastEditTime : 2020-02-12 13:49:39
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/eg/strncpy.c
 */
#include <stdio.h>
#include <strings.h>
int main()
{
    char str1[] = "aaaaa";
    char str2[] = "bc"; 
    printf("%s\n", strncpy(str1,str2,3));
    return 0;
}