/*
 * @Author: your name
 * @Date: 2020-01-31 17:15:14
 * @LastEditTime : 2020-01-31 17:43:23
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/point-test.c
 */
#include <stdio.h>

int main(){
    char *a="adfadsfdssfsdfsdfdsfsdffaaaaaaaaadffaaaaaaaaadffaaaaaaaaadffaaaaaaaaadffaaaaaaaaadffaaaaaaaaadffaaaaaaaaadffaaaaaaaaa";
    int *b = 1233;
    float *c =10000000;
    // float f = 1.23;
    float test = 1.111;
    double test1 = 1.111;
    printf("float是 %d 位\n", sizeof(test));
    printf("double是 %d 位\n", sizeof(test1));
    //---
    int f = 0xBF400000;
    printf("    %f\n",*(float*)&f);
    //---
    printf("*a = %s\n",a);
    printf("*b = %d\n",b);
    // printf("f = %x\n",f);
    printf("*c = %f\n",c);
    return 0;
}