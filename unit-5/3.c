/*
 * @Author: your name
 * @Date: 2020-02-03 12:46:50
 * @LastEditTime : 2020-02-03 12:52:07
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unti-5/3.c
 */
#include <stdio.h>

int main()
{
    int m, n;
    printf("请输入m和n，用空格分开\n");
    scanf("%d %d", &m, &n);
    //最小公倍数
    int max = m > n ? m : n;
    while (1)
    {
        if (max % m == 0 && max % n == 0)
        {
            break;
        }
        max++;
    }
    //最大公约数
    int min = m > n ? n : m;
    while (min > 0)
    {
        if (m % min == 0 && n % min == 0)
        {
            break;
        }
        min--;
    }
    printf("最大公约数为 %d\n", min);
    printf("最小公倍数为 %d\n", max);
    return 0;
}