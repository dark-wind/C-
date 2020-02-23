/*
 * @Author: your name
 * @Date: 2020-02-03 11:21:25
 * @LastEditTime : 2020-02-03 11:31:25
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/eg/5.10.c
 */
#include <stdio.h>

int main()
{
    int prime, flag = 1;
    scanf("%d", &prime);
    for (int i = 2; i < prime; i++)
    {
        if (prime % i == 0)
        {
            printf(" %d 不是质数，可以被 %d 整除\n", prime, i);
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        printf(" %d 是质数\n", prime);
    }
    return 0;
}