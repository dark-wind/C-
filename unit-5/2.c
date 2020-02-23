/*
 * @Author: your name
 * @Date: 2020-02-03 11:50:30
 * @LastEditTime : 2020-02-03 12:46:12
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unti-5/2.c
 */
#include <stdio.h>
#include <math.h>
int main()
{
    int sign = 1;
    double pi = 0.0, n = 1.0, term = 1.0;
    int count=0;
    while (fabs(term) >= 1e-6)
    // while (fabs(term) >= 1e-8)
    {
        pi = pi + term;
        n = n + 2;
        sign = -sign;
        term = sign / n;
        count++;
    }
    pi = pi * 4;
    printf("pi=%10.8f\n", pi);
    printf("循环了: %d 次\n",count);
    return 0;
}