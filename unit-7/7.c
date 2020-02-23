/*
 * @Author: your name
 * @Date: 2020-02-13 22:18:35
 * @LastEditTime : 2020-02-13 22:21:29
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-7/7.c
 */
#include <stdio.h>
void getyuanyin(char *a, int n)
{
    char b[19];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            b[j] = a[i];
            j++;
        }
    }
    printf("%s\n", b);
}
int main()
{
    char a[] = "adfre";
    getyuanyin(a, 5);
    return 0;
}