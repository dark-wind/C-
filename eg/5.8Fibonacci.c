/*
 * @Author: your name
 * @Date: 2020-02-03 11:04:01
 * @LastEditTime : 2020-02-03 11:19:17
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/eg/5.8Fibonacci.c
 */
#include <stdio.h>

int Fn(int n)
{
    long int rs;
    if (n == 1 || n == 2)
    {
        rs = 1;
    }
    else
    {
        rs = Fn(n - 1) + Fn(n - 2);
    }
    return rs;
}
int main()
{
    long int rs;
    int n, filter = 1;
    printf("请输入一个正整数\n");
    while (filter)
    {
        scanf("%d", &n);
        if (n > 0)
        {
            filter = 0;
        }
        else
        {
            printf("超出范围，请重新输入\n");
        }
    }
    rs = Fn(n);
    printf("%ld\n", rs);
    return 0;
}