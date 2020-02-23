/*
 * @Author: your name
 * @Date: 2020-02-08 15:11:41
 * @LastEditTime : 2020-02-08 15:16:03
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/eg/string-length-test.c
 */
#include <stdio.h>

int main(){
    int rows = 5;
    int cols = 4;
    double sales[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sales[i][j]=0;
        }
    }
        for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%f\n",sales[i][j]);
            
        }
    }
    
    
    return 0;
}