/*
 * @Author: your name
 * @Date: 2020-02-08 13:29:10
 * @LastEditTime : 2020-02-12 16:05:21
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-6/14.c
 */
#include <stdio.h>
#include <strings.h>

int main()
{
    char s1[100], s2[100];
    int rs;
    gets(s1);
    gets(s2);
    // rs = strcmp(s1, s2);
    for (int i = 0;; i++)
    {
        if (s1[i] != '\0' && s2[i] != '\0')
        {
            if (s1[i] != s2[i])
            {
                rs = s1[i] - s2[i];
                break;
            }
        }
        else
        {
            // 不一样长
            rs = s1[i] - s2[i];
            break;
        }
    }

    printf("%d\n", rs);

    return 0;
}