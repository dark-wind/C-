/*
 * @Author: your name
 * @Date: 2020-02-04 13:23:10
 * @LastEditTime : 2020-02-04 13:29:58
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unti-5/11.c
 */
#include <stdio.h>

int main()
{
    float high = 100, sum = 100;
    for (int i = 1; i < 10; i++)
    {
        high = high / 2;
        sum += high * 2;
    }
    high = high / 2;
    printf("第10次落地时，共经过 %f 米\n", sum);
    printf("第10次反弹 %f 米\n", high);

    return 0;
}