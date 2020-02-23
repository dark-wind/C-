/*
 * @Author: your name
 * @Date: 2020-02-15 13:00:30
 * @LastEditTime : 2020-02-15 20:06:02
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/eg/practice/pointFunction.c
 */
#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 1;
    int b = 2;
    swap(&a, &b);
    printf("a=%d,b=%d\n", a, b);
    return 0;
}