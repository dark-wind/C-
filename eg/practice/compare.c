/*
 * @Author: your name
 * @Date: 2020-01-30 12:28:18
 * @LastEditTime: 2020-01-30 12:28:38
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/compare.c
 */
#include <stdio.h>

int main(){
    typedef int (*compareFunc)(void *data1, void *data2);

    void *max(void *data, int unitSize, int size, compareFunc func){
        int i;
        char *ptr = (char *)data;
        char *max = ptr;
        for ( i = 1; i < size; i++)
        {
            char *item = ptr+i*unitSize;
            if(func(item, max)>0){
                max = item;
            }
        }
        return max;
    }

    int compareInt(void *data1, void *data2){
        int *point1 = (int*)data1;
        int *point2 = (int*)data2;
        int i1 = *point1;
        int i2 = *point2;
        return i2-i1;
    }

    return 0;
}