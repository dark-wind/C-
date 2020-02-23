/*
 * @Author: your name
 * @Date: 2020-02-02 11:01:30
 * @LastEditTime : 2020-02-02 11:21:14
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/4.3.c
 */
#include <stdio.h>

int main()
{
    float a, b, c, t;
    scanf("%f %f %f", &a, &b, &c);
    // 令a最小，c最大
    //保证a最小
    if(a>b){
        t=a;
        a=b;
        b=t;
    }
    if(a>c){
        t=a;
        a=c;
        c=t;
    }
    if(b>c){
        t=b;
        b=c;
        c=t;
    }
    printf("a=%.2f, b=%.2f, c=%.2f, \n",a,b,c);

    return 0;
}