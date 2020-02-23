/*
 * @Author: your name
 * @Date: 2020-01-31 11:08:31
 * @LastEditTime : 2020-01-31 11:12:08
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-1/6.c
 */
#include <stdio.h>

int main(){
    int a, b, c;
    printf("请输入3个数，以空格分开\n");
    scanf("%d %d %d",&a,&b,&c);
    int max = a;
    if(a<b){
        max = b;
    }
    if(b<c){
        max = c;
    }
    printf("最大的是： %d\n",max);
    return 0;
}