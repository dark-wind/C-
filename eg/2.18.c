/*
 * @Author: your name
 * @Date: 2020-01-31 11:13:18
 * @LastEditTime : 2020-01-31 11:14:31
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/2.18.c
 */
#include <stdio.h>

int main(){
    int i=2, t=1;
    while(i<6){
        t = t * i;
        i = i + 1;
    }
    printf("%d\n",t);
    return 0;
}