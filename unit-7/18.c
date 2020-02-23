/*
 * @Author: your name
 * @Date: 2020-02-15 12:34:21
 * @LastEditTime : 2020-02-15 12:49:08
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-7/18.c
 */
#include <stdio.h>
int isLeap(int year)
{
    int rs = 0;
    if (year % 4 == 0 && year % 100 != 0)
    {
        rs = 1;
    }
    if (year % 400 == 0)
    {
        rs = 1;
    }
    return rs;
}
int main()
{
    int year, month, day;
    int count = 0;
    scanf("%d", &year);
    scanf("%d", &month);
    scanf("%d", &day);
    int leap = isLeap(year);
    int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (leap)
    {
        monthDays[1] = 29;
    }
    for (int i = 0; i < month - 1; i++)
    {
        count += monthDays[i];
    }
    count += day;
    printf("%d\n",count);
    return 0;
}