/*
 * @Author: your name
 * @Date: 2020-01-30 10:00:38
 * @LastEditTime : 2020-01-30 16:51:31
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/string-point.c
 */
#include <stdio.h>
// #include <stdlib.h>
#include<string.h>

// 字符串比较函数
int cmp_char(void *a , void *b){
    char *a1 = (char*)a;    //强制类型转换
    char *b1 = (char*)b;
    return *a1 - *b1;
}

void swap(char *str1, char *str2){
    int len = strlen(str1) > strlen(str2)?strlen(str1):strlen(str2);
    char *p = (char *) malloc(sizeof(char) * len);
    strcpy(p,str1);
    strcpy(str1,str2);
    strcpy(str2,p);
}

int main(){
    char *str1= "aaaa";
    char *str2= "bbbbb";
    swap(&str1,&str2);

    printf("%s\n",str1);
    printf("%s\n",str2);
    
    return 0;
}


