/*
 * @Author: your name
 * @Date: 2020-01-22 13:46:04
 * @LastEditTime : 2020-01-22 14:01:13
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/pointer.h
 */
#include <stdio.h>

int main(){
    int a = 100, b = 10;
    int *pointer_1, *pointer_2;
    pointer_1 = &a;
    pointer_2 = &b;
    printf("a = %d \n",a);
    printf("b = %d\n",b);
    printf("*pointer_1 = %d\n",*pointer_1);
    printf("*pointer_2 = %d\n",*pointer_2);
    return 0;
}