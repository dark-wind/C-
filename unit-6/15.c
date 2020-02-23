/*
 * @Author: your name
 * @Date: 2020-02-12 16:39:11
 * @LastEditTime : 2020-02-12 18:45:28
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-6/15.c
 */
#include <stdio.h>

int main()
{
    char s1[100];
    char s2[100];
    scanf("%s",s1);
    for (int i = 0; i < 100; i++)
    {
        if (s1[i] != '\0')
        {
            s2[i]=s1[i];
        }
        else
        {
            s2[i]=s1[i];
            break;
        }
        
    }
    printf("%s\n",s2);
    return 0;
}