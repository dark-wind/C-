/*
 * @Author: your name
 * @Date: 2020-02-05 13:47:40
 * @LastEditTime : 2020-02-05 13:50:50
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/eg/6.4.c
 */
#include <stdio.h>

int main(){
    int a[][3]={{1,2,3},{4,5,6}};
    int b[3][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            b[j][i]=a[i][j];
        }   
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}