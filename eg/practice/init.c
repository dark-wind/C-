/*
 * @Author: your name
 * @Date: 2020-02-15 20:22:33
 * @LastEditTime : 2020-02-15 20:23:11
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * 
 * @FilePath: /c-lang/eg/practice/init.c
 */
#include <stdio.h>

int main(){
    int a[10]={1,2,2,[7]=9,5,5};
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",a[i]);
    }
    
    return 0;
}