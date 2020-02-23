/*
 * @Author: your name
 * @Date: 2020-02-15 11:51:15
 * @LastEditTime : 2020-02-15 12:05:09
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-7/17.c
 */
#include <stdio.h>
int stack[100];
int i = 0;

void slipe(int n)
{
    stack[i] = n % 10;

    n = n / 10;
    if (n < 1)
    {
        return;
    }
    else
    {
        i++;
        slipe(n);
    }
}
int main()
{
    int n;
    int symbol = 1;

    scanf("%d", &n);
    if (n < 0)
    {
        symbol = 0;
        n = n * (-1);
    }
    slipe(n);
    if (symbol == 0)
    {
        printf("-");
    }
    for (int j = i; j >= 0; j--)
    {
        switch (stack[j])
        {
        case 0:
            printf("0");
            break;
        case 1:
            printf("1");
            break;
        case 2:
            printf("2");
            break;
        case 3:
            printf("3");
            break;
        case 4:
            printf("4");
            break;
        case 5:
            printf("5");
            break;
        case 6:
            printf("6");
            break;
        case 7:
            printf("7");
            break;
        case 8:
            printf("8");
            break;
        case 9:
            printf("9");
            break;
        default:
            break;
        }
    }
    printf("\n");
    return 0;
}