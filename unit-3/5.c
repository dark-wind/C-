/*
 * @Author: your name
 * @Date: 2020-02-01 15:13:53
 * @LastEditTime : 2020-02-01 15:36:00
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-3/5.c
 */
#include <stdio.h>

int main(){
    //a=3 b=7 x=8.5 y=71.82 c1=A c2=a

    //输入
    //a=3b=7            
    //8.5 71.82Aa 
    int a,b;
    float x,y;
    char c1,c2;
    scanf("a=%db=%d",&a,&b);
    scanf("%f%e",&x,&y);
    scanf("%c%c",&c1,&c2);
    printf("a=%d b=%d x=%.1f y=%.2f c1=%c c2=%c\n",a,b,x,y,c1,c2);
    return 0;
}