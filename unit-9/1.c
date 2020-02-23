/*
 * @Author: your name
 * @Date: 2020-02-20 14:56:12
 * @LastEditTime: 2020-02-20 17:10:52
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-9/1.c
 */
#include <stdio.h>
typedef struct date
{
    int year;
    int month;
    int day;
} Date;
void getDay(Date d1)
{
    int count=0;
    int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((d1.year % 4 == 0 && d1.year % 100 != 0) || d1.year % 400 == 0)
    {
        monthDays[1]=29;
    }
    for (int i = 0; i < d1.month - 1; i++)
    {
        count += monthDays[i];
    }
    count += d1.day;
    printf("%d\n",count);
}
int main()
{
    int year;
    int month;
    int day;
    scanf("%d", &year);
    scanf("%d", &month);
    scanf("%d", &day);
    Date d1;
    d1.year = year;
    d1.month = month;
    d1.day = day;
    getDay(d1);
    return 0;
}