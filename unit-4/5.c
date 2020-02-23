/*
 * @Author: your name
 * @Date: 2020-02-02 11:48:28
 * @LastEditTime : 2020-02-02 11:54:01
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-4/5.c
 */
#include <stdio.h>
#include<math.h>

int main(){
    int a, filter=1;
    double rs;
    printf("请输入一个小于1000的正数\n");
    while (filter)
    {
        scanf("%d",&a);
        if(a>0 && a<1000){
            filter =0;
        }else{
            printf("超出范围\n");
            printf("请输入一个小于1000的正数\n");
        }
    }
        
    printf("%.2lf\n",sqrt(a));
    return 0;
}