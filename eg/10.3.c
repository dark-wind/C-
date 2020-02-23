/*
 * @Author: your name
 * @Date: 2020-02-22 13:25:29
 * @LastEditTime: 2020-02-22 13:32:01
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/eg/10.3.c
 */
#include <stdio.h>
#include<string.h>
int main(){
    FILE *fp;
    char *str[4] = {
        "aaaaaaa",
        "bbbbb",
        "cccccc",
        "ddddddd",
    };
    char *temp;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i+1; j < 4; j++)
        {
            if(strcmp(str[i],str[j])){
                temp = str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    if((fp = fopen("storage.txt","w"))==NULL){
        printf("open file fail!!!\n");
        exit(0);
    }
    for (int i = 0; i < 4; i++)
    {
        fputs(str[i],fp);
        fputs("\n",fp);
    }
    
    return 0;
}