/*
 * @Author: your name
 * @Date: 2020-02-13 22:21:52
 * @LastEditTime : 2020-02-13 22:27:19
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-7/8.c
 */
#include <stdio.h>
void out(char *in)
{
    for (int i = 0; i < 4; i++)
    {
        printf("%c", in[i]);
        printf(" ");
    }
}
int main()
{
    char in[5];
    scanf("%s", in);
    out(in);
    return 0;
}