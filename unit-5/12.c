/*
 * @Author: your name
 * @Date: 2020-02-04 13:31:03
 * @LastEditTime : 2020-02-04 13:33:04
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unti-5/12.c
 */
#include <stdio.h>

int main()
{
    int now = 1;
    for (int i = 0; i < 10 - 1; i++)
    {
        now = (now + 1) * 2;
    }
    printf("%d\n", now);
    return 0;
}