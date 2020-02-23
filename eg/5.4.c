/*
 * @Author: your name
 * @Date: 2020-02-03 10:38:10
 * @LastEditTime : 2020-02-03 11:00:13
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/eg/5.4.c
 */
#include <stdio.h>

void byFor()
{
    float amount, total;
    int i = 0;
    for (; i < 1000; i++)
    {
        scanf("%f", &amount);
        total += amount;
        if (total >= 100000)
        {
            break;
        }
    }
    printf("捐款人数： %d\n", i + 1);
    printf("捐款金额： %f\n", total);
}
int main()
{
    // float amount, total;
    // int count = 0;
    // while (total < 100000 && count < 1000)
    // {
    //     scanf("%f", &amount);
    //     total += amount;
    //     count++;
    // }
    // printf("捐款人数： %d\n", count);
    // printf("捐款金额： %f\n", total);
    byFor();
    return 0;
}