/*
 * @Author: your name
 * @Date: 2020-02-02 11:25:57
 * @LastEditTime : 2020-02-02 11:37:46
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-4/3.c
 */
#include <stdio.h>

int a = 3, b = 4, c = 5;
void first()
{
    printf("%d\n", (a + b > c && b == c));
}
void second()
{
    printf("%d\n", (a || b + c && b - c));
}
void third()
{
    printf("%d\n", (!(a > b) && !c || 1));
}
void forth()
{
    int x, y;
    printf("%d\n", (!(x = a) && (y = b) && 0));
}
void fifth()
{
    printf("%d\n", (!(a + b) + c - 1 && b + c / 2));
}
int main()
{
    first();
    second();
    third();
    forth();
    fifth();
    return 0;
}