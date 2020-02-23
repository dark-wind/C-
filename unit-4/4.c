/*
 * @Author: your name
 * @Date: 2020-02-02 11:39:52
 * @LastEditTime : 2020-02-02 11:47:20
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-4/4.c
 */
#include <stdio.h>

int main(){
    
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("max is %d\n",a);
    }
    if(b>a && b>c){
        printf("max is %d\n",b);
    }
    if(c>b && c>a){
        printf("max is %d\n",c);
    }
    return 0;
}