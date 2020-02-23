/*
 * @Author: your name
 * @Date: 2020-02-03 10:35:05
 * @LastEditTime : 2020-02-03 10:36:08
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/eg/5.1.c
 */
#include <stdio.h>

int main(){
    int i=1, sum=0;
    for (; i < 101; i++)
    {
        sum = sum+i;
    }
    printf("sum(1,100) = %d\n",sum);
    return 0;
}