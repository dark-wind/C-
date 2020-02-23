/*
 * @Author: your name
 * @Date: 2020-02-13 11:36:23
 * @LastEditTime : 2020-02-13 11:43:39
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/eg/7.17.c
 */
#include <stdio.h>
void jiecheng(int n)
{
    int sum = 1;
    printf("%d! = 1", n);
    for (int i = 2; i <= n; i++)
    {
        printf(" * %d", i);
        sum = sum * i;
    }
    printf(" = %d\n", sum);
}
int main()
{
    for (int i = 1; i < 6; i++)
    {
        jiecheng(i);
    }

    return 0;
}