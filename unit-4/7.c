/*
 * @Author: your name
 * @Date: 2020-02-02 14:36:53
 * @LastEditTime : 2020-02-02 14:49:31
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-4/7.c
 */
#include <stdio.h>

int main(){
    int x,y;
    printf("enter x:\n");
    scanf("%d",&x);
    y=0;
    if(x>=0)
        if(x>0) y=1;
    else y=-1;
    printf("x = %d, y = %d\n",x,y);
    return 0;
}