/*
 * @Author: your name
 * @Date: 2020-02-08 11:16:12
 * @LastEditTime : 2020-02-08 11:30:08
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-6/10.c
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[3][80];
    // 随机生成字符串
    //  0-127是ascii
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 80; j++)
        {
            str[i][j] = rand() % 128;
        }
    }
    //遍历统计
    int Letter=0,letter=0,num=0,space=0,other=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 80; j++)
        {
            if(str[i][j]>='0'&& str[i][j]<='9'){
                num++;
            }else
            if(str[i][j]>='a'&&str[i][j]<='z'){
                letter++;
            }else
            if(str[i][j]>='A'&&str[i][j]<='Z'){
                Letter++;
            }else
            if(str[i][j]==' '){
                space++;
            }else{
                other++;
            }
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n",str[i]);
    }
    printf("大写字母有 %d 个\n",Letter);
    printf("小写字母有 %d 个\n",letter);
    printf("数字有 %d 个\n",num);
    printf("空格有 %d 个\n",space);
    printf("其他字符有 %d 个\n",other);

    return 0;
}