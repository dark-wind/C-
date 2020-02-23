/*
 * @Author: your name
 * @Date: 2020-02-15 16:40:50
 * @LastEditTime : 2020-02-15 17:28:42
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/eg/practice/input.c
 */
#include <stdio.h>

int main()
{
    int a, b;
    int c;
    c = scanf("%d %d", &a, &b);
    printf("a:%d %p\n", a, &a);
    printf("b:%d %p\n", b, &b);
    printf("c:%d %p\n", c, &c);
    return 0;
}