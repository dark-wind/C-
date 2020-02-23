/*
 * @Author: your name
 * @Date: 2020-02-13 20:45:25
 * @LastEditTime : 2020-02-13 20:57:30
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-7/1.c
 */
#include <stdio.h>
void ptgbs(int m, int n)
{
    int bigger = m > n ? m : n;
    for (int i = bigger;; i++)
    {
        if (i % m == 0 && i % n == 0)
        {
            printf("公倍数 %d\n", i);
            break;
        }
    }
}

void ptgys(int m, int n)
{
    int flag = 1;
    int smaller = m < n ? m : n;
    for (int i = smaller; i > 1; i--)
    {
        if (m % i == 0 && n % i == 0)
        {
            printf("共约数 %d\n", i);
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        printf("没有共约数\n");
    }
}
int main()
{
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);
    ptgbs(m, n);
    ptgys(m, n);
    return 0;
}