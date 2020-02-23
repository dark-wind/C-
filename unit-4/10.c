/*
 * @Author: your name
 * @Date: 2020-02-02 17:23:25
 * @LastEditTime : 2020-02-02 17:51:07
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-4/10.c
 */
#include <stdio.h>

int main(){
    float I,price;
    scanf("%f",&I);
    if(I<=100000){
        price = I*0.1;
    }
    if(I>100000&&I<=200000){
        price  = 100000*0.1 + (I-100000)*0.075;
    }
    if(I>200000&&I<=400000){
        price = 100000*0.1 +100000*0.075 +(I-200000)*0.05;
    }
    // switch ((int)(I/100000))
    // {
    // case 10:
    // case 11:
    // case 12:
    // case 13:
    // case 14:
    // case 15:
    // case 16:
    // case 17:
    // case 18:
    // case 19:
    // case 20:
    //     price  = 100000*0.1 + (I-100000)*0.075;
    //     /* code */
    //     break;
    
    // default:
    //     break;
    // }
    printf("应发奖金为: %f\n",price);
    return 0;
}