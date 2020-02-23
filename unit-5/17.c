/*
 * @Author: your name
 * @Date: 2020-02-04 15:37:07
 * @LastEditTime : 2020-02-04 15:56:56
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unti-5/17.c
 */
#include <stdio.h>

int main()
{
    int a, b, c, x, y, z;
    // a-x != 0
    // c-x != 0
    // c-z != 0
    char jia[] = {'c', 'b', 'a'};
    char yi[] = {'x', 'y', 'z'};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (yi[j] != '0')
            {
                if (jia[i] == 'a' && yi[j] == 'x')
                {
                    continue;
                }
                if (jia[i] == 'c' && yi[j] == 'x')
                {
                    continue;
                }
                if (jia[i] == 'c' && yi[j] == 'z')
                {
                    continue;
                }
                printf("%c --- %c\n", jia[i], yi[j]);
                yi[j] = '0';
                break;
            }
        }
    }

    return 0;
}