/*
 * @Author: your name
 * @Date: 2020-02-13 21:57:52
 * @LastEditTime : 2020-02-13 22:13:41
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-7/5.c
 */
#include <stdio.h>
#include <string.h>
void reverse(char *a, int len)
{
    char temp;
    for (int i = 0; i < len / 2; i++)
    {
        temp = a[i];
        a[i] = a[len - i - 1];
        a[len - i - 1] = temp;
    }
    int b = 1;
}
int getlen(char *a)
{
    int count = 0;
    while (*a != '\0')
    {
        count++;
        a++;
    }
    return count;
}
int main()
{
    char a[100];
    scanf("%s", a);
    int length = getlen(a);
    reverse(&a, length);
    for (int i = 0; i < length; i++)
    {
        printf("%c", a[i]);
    }

    return 0;
}