/*
 * @Author: your name
 * @Date: 2020-02-18 16:08:57
 * @LastEditTime: 2020-02-18 16:09:59
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-8/8.c
 */
#include <stdio.h>
int num = 0;
int letter = 0;
int Letter = 0;
int space = 0;
int other = 0;
void count(char *a)
{
    int j = 0;
    while (a[j] != '\0')
    {
        if (a[j] >= '0' && a[j] <= '9')
        {
            num++;
        }
        else if (a[j] >= 'a' && a[j] <= 'z')
        {
            letter++;
        }
        else if (a[j] >= 'A' && a[j] <= 'Z')
        {
            Letter++;
        }
        else if (a[j] == ' ')
        {
            space++;
        }
        else
        {
            other++;
        }
        j++;
    }
}
int main()
{
    char str[100];
    gets(str);
    count(str);
    printf("大写字母有 %d 个\n", Letter);
    printf("小写字母有 %d 个\n", letter);
    printf("数字有 %d 个\n", num);
    printf("空格有 %d 个\n", space);
    printf("其他字符有 %d 个\n", other);
    return 0;
}