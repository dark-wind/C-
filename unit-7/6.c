/*
 * @Author: your name
 * @Date: 2020-02-13 22:15:17
 * @LastEditTime : 2020-02-13 22:17:42
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-7/6.c
 */
#include <stdio.h>
void catab(char *a, char *b)
{
    for (int i = 0; i < 4; i++)
    {
        a[3 + i] = b[i];
    }
    printf("%s\n", a);
}
int main()
{
    char a[10] = "aaa";
    char b[] = "bbbb";
    catab(a, b);
    return 0;
}