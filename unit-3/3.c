/*
 * @Author: your name
 * @Date: 2020-02-01 13:31:37
 * @LastEditTime : 2020-02-01 13:45:49
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-3/3.c
 */
#include <stdio.h>
#include<math.h>
int main(){
    double d=300000,p=6000,r=0.01;
    double temp = p-d*r;
    double 分子 = log(p/temp);
    double 分母 = log(1+r);
    double m = 分子/分母;
    printf("%.1lf\n",m);
    return 0;
}