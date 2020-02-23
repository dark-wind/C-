/*
 * @Author: your name
 * @Date: 2020-02-19 19:43:56
 * @LastEditTime: 2020-02-19 19:56:44
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-8/18.c
 */
#include <stdio.h>

int main()
{
    char *month[12] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"};
    int n;
    printf("请输入一个月份\n");
    scanf("%d", &n);
    printf("%d 月 %s\n", n, *(month + n-1));
    return 0;
}
