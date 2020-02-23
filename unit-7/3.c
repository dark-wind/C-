/*
 * @Author: your name
 * @Date: 2020-02-13 21:21:17
 * @LastEditTime : 2020-02-13 21:24:50
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-7/3.c
 */
#include <stdio.h>

void isprime(int n){
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            printf("%d 不是素数\n",n);
            return;
        }
    }
    printf("%d 是素数\n",n);
}
int main(){
    int n;
    scanf("%d",&n);
    isprime(n);
    return 0;
}