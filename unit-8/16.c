/*
 * @Author: your name
 * @Date: 2020-02-19 17:46:47
 * @LastEditTime: 2020-02-19 19:28:45
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-8/16.c
 */
#include <stdio.h>
#define offset 48 //数字0与字符串0 ascii码之间的偏移
int a[10];
int used = 0;

void putTemp(char *temp, int j)
{
    int sum = 0;
    int t;
    int left = j;
    for (int i = 0; i < j; i++)
    {
        t = (int)temp[i] - offset;
        for (int k = 0; k < left - 1; k++)
        {
            t = t * 10;
        }
        sum = sum + t;
        left--;
    }
    a[used] = sum;
    used++;
}
int main()
{
    char str[100];
    gets(str);
    int i = 0;
    int j = 0;
    char temp[10] = {'\0'};
    while (*(str + i) != '\0' || j > 0)
    {
        if (*(str + i) >= '0' && *(str + i) <= '9')
        {
            temp[j] = *(str + i);
            j++;
        }
        else
        {
            if (j != 0)
            {
                putTemp(temp, j);
                memset(temp, '\0', sizeof(temp));
                j = 0;
            }
        }
        i++;
    }
    for (int l = 0; l < used; l++)
    {
        printf("%d\n", a[l]);
    }

    return 0;
}