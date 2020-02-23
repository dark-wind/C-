/*
 * @Author: your name
 * @Date: 2020-01-31 13:16:04
 * @LastEditTime : 2020-01-31 17:08:23
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-2/8-3.c
 */
#include <stdio.h>
int getMax(int *arr,int count){
    int max= *arr;
    for (int i = 0; i < count-1; i++)
    {
        arr++;
        if(max< *arr){
            max = *arr;
        }
    }
    return max;
}

int main(){
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max = getMax(arr, 10);
    printf("max is %d\n",max);
    
    return 0;
}