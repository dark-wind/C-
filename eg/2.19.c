/*
 * @Author: your name
 * @Date: 2020-01-31 11:15:25
 * @LastEditTime : 2020-01-31 11:46:01
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/2.19.c
 */
#include <stdio.h>

double book(){
    int sign = 1;
    double deno = 2.0, sum = 1.0, term;
    while(deno<101){
        sign = -sign;
        term = sign/deno;
        sum = sum + term;
        deno = deno + 1;
    }
    return sum;
}

int main(){
    printf("book_result = %f\n",book());
    printf("***********");
    int sign=1;
    double 分母=2, 总计=1;
    printf("1");
    while(分母<101){
        if(sign == 1){
            总计 = 总计 - 1/分母;
            printf("-");
            printf(" 1/%f ", 分母);
            sign = 0;
        }else
        {
            总计 = 总计 + 1/分母;
            printf("+");
            printf(" 1/%f ", 分母);
            sign = 1;
        }
        分母++;
    }
    printf("\n");
    printf("结果 = %f",总计);
    return 0;
}