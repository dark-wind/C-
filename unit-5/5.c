/*
 * @Author: your name
 * @Date: 2020-02-03 13:13:20
 * @LastEditTime : 2020-02-03 13:21:37
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unti-5/5.c
 */
#include <stdio.h>

int main(){
    int a,n;
    int sum,last;
    scanf("%d %d",&a,&n);
    last=sum=a;
    printf("%d",sum);
    for (int i = 1; i < n; i++)
    {
        last=last*10+a;
        sum =last+sum;
        printf(" + %d",last);
    }
    printf("\n");
    printf("%d\n",sum);
    

    return 0;
}