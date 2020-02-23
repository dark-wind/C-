/*
 * @Author: your name
 * @Date: 2020-02-04 11:19:31
 * @LastEditTime : 2020-02-04 11:33:55
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unti-5/8.c
 */
#include <stdio.h>

int main()
{
    int x, filter = 1;
    while (filter)
    {
        printf("请输入一个3位整数\n");
        scanf("%d", &x);
        if (x >= 100 && x <= 999)
        {
            filter = 0;
        }
        else
        {
            printf("超出范围，请重新输入\n");
        }
    }
    int ge, shi, bai;
    bai = x / 100;
    shi = (x - bai * 100) / 10;
    ge = x - bai * 100 - shi * 10;
    printf("%d %d %d\n", bai, shi, ge);
    if (bai * bai * bai + shi * shi * shi + ge * ge * ge == x)
    {
        printf("%d 是一个水仙花数\n", x);
    }
    else
    {
        printf("%d 不是一个水仙花数\n", x);
    }

    return 0;
}