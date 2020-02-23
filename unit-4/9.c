/*
 * @Author: your name
 * @Date: 2020-02-02 16:54:38
 * @LastEditTime : 2020-02-02 17:22:12
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-4/9.c
 */
#include <stdio.h>

int main(){
    int a;
    int filter =1;
    while (filter)
    {
        printf("请输入一个不多于5位的正整数：\n");
        scanf("%d",&a);
        if (a >= 0 && a <= 99999)
        {
            filter = 0;
        }
        else
        {
            printf("超出范围\n");
        }
    }
    filter=1;
    if(a/10000 > 0 && filter){
        filter =0;
        printf("这是一个5位数: %d\n",a);
    }
    if(a/1000 > 0 && filter){
        filter =0;
        printf("这是一个4位数: %d\n",a);
    }
    if(a/100 > 0 && filter){
        filter =0;
        printf("这是一个3位数: %d\n",a);
    }
    if(a/10 > 0 && filter){
        filter =0;
        printf("这是一个2位数: %d\n",a);
    }
    if(a/1 >= 0 && filter){
        filter =0;
        printf("这是一个1位数: %d\n",a);
    }

    while(a){
        printf("%d",a%10);
        a= a/10;
    }    
    printf("\n");
    return 0;
}