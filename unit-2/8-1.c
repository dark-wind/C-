/*
 * @Author: your name
 * @Date: 2020-01-31 11:51:55
 * @LastEditTime : 2020-01-31 11:54:23
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-2/8.c
 */
#include <stdio.h>

int main(){
    for (int i = 1900; i < 2001; i++)
    {
        if(i%4==0 && i%100 != 0){
            printf("%d\n",i);
        }
        if(i%100==0 && i%400 == 0){
            printf("%d\n",i);
        }
    }
    
    return 0;
}