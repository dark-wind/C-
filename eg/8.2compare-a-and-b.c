/*
 * @Author: your name
 * @Date: 2020-01-22 14:03:07
 * @LastEditTime : 2020-01-30 15:21:14
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/8.2compare-a&b.c
 */
#include <stdio.h>

void swapData(int *data1, int *data2){
    int temp = *data1;
    *data1= *data2;
    *data2=temp;
}

// address1地址与address2互换
void swapAddress(int **address1, int **address2){
    long int temp = *address1;
    // int *temp = *address1; //这也行
    *address1 = *address2;
    *address2 = temp;
}
int main(){
    int *p1, *p2, *temp, a, b;
    a=2;
    b=1;
    p1 = &a;
    p2 = &b;
    printf("a = %d , b = %d\n",a, b);
    swapData(p1,p2);
    // swapAddress(&p1,&p2);
    printf("max = %d , min = %d\n",*p1, *p2);
    return 0;
}

