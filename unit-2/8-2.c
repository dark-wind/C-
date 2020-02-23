/*
 * @Author: your name
 * @Date: 2020-01-31 12:50:22
 * @LastEditTime : 2020-01-31 13:05:52
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-2/8-2.c
 */
#include <stdio.h>
#include <math.h>

int main(){
    // ax^2 + bx + c = 0
    int a, b, c, d;
    double x1, x2;
    scanf("%d %d %d",&a,&b,&c);
    d = b*b-4*a*c;
    printf("%dx^2 + %dbx + %d = 0\n",a,b,c);
    if(d>0){
        printf("sqrt(d) = %f\n",sqrt(d));
        printf("(-1*b + sqrt(d) = %f\n",(-1*b + sqrt(d)));
        x1 = (-1*b + sqrt(d)) / (2*a);
        x2 = (-1*b - sqrt(d)) / (2*a);
        printf("有2个根：\n");
        printf("x1 = %f\n",x1);
        printf("x2 = %f\n",x2);
    }else if(d == 0){
        x1 = x2 = (-1*b + sqrt(d)) / (2*a);
        printf("重根: x1=x2=%f\n",x1);
    }else{
        printf("d<0 无解\n");
    }

    return 0;
}