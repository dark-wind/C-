/*
 * @Author: your name
 * @Date: 2020-01-31 17:34:50
 * @LastEditTime : 2020-01-31 18:30:11
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-3/1.c
 */
#include <stdio.h>

int main(){
    double p,r, temp;
    int n;
    printf("请依次输入：年增长率 年数\n");
    scanf("%lf %d", &r, &n);
    // p = (1 + r)^n
    p =  1 + r;
    temp = p;
    for (int i = 0; i < n; i++)
    {
        p = p*temp;
    }
    
    printf("p = %lf\n",p);

    return 0;
}