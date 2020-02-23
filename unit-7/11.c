/*
 * @Author: your name
 * @Date: 2020-02-14 11:29:16
 * @LastEditTime : 2020-02-14 11:34:05
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-7/11.c
 */
#include <stdio.h>
void charsort(char *a)
{
    char temp;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    int b;
}
int main()
{
    char a[11] = "neiolxnoil";
    charsort(&a);
    printf("%s\n", a);

    return 0;
}