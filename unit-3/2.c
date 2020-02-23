/*
 * @Author: your name
 * @Date: 2020-02-01 13:06:00
 * @LastEditTime : 2020-02-01 13:28:17
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-3/2.c
 */
#include <stdio.h>
double rate5 = 0.0585f;
double rate2 = 0.0468f;
double rate3 = 0.054f;
double calcP(double rate, int n)
{
    return 1000 * (1 + n * rate);
}
double first()
{
    return calcP(rate5, 5);
}

double second()
{
    double temp;
    temp = calcP(rate2, 2);
    temp = calcP(rate3, 3);
    return temp;
}

double third(){
    double temp;
    temp = calcP(rate3, 3);
    temp = calcP(rate2, 2);
    return temp;
}
int main()
{
    printf("一次存5年： %lf\n", first());
    printf("先存2年，再存3年： %lf\n", second());
    printf("先存3年，再存2年： %lf\n", third());
    return 0;
}