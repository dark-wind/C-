/*
 * @Author: your name
 * @Date: 2020-01-29 17:11:41
 * @LastEditTime : 2020-01-29 17:12:57
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/heap.c
 */
#include <stdio.h>

int main(){
    int * nums = (int*)malloc(sizeof(int)*10);
    nums[0]=1;
    nums[1]=8;
    free(nums);
    return 0;
}