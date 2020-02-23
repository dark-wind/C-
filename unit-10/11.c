/*
 * @Author: your name
 * @Date: 2020-02-22 18:34:29
 * @LastEditTime: 2020-02-22 19:29:34
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-10/11.c
 */
#include <stdio.h>
char toUpper(char x);
int main()
{
    char str[100][100];
    char read[100][100];
    FILE *string;
    int n;
    printf("请输入要输入的字符串数量\n");
    scanf("%d", &n);

    //打开文件
    if ((string = fopen("string", "w+")) == NULL)
    {
        printf("write file fail!!\n");
        return 0;
    }
    //写入文件
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
        fprintf(string, str[i]);
        fputs("\n", string);
    }
    //重置文件指针
    // fseek(string,0L,SEEK_SET);
    rewind(string);
    //读取文件
    for (int i = 0; i < n; i++)
    {
        fgets(read[i], 100, string); //读取一行
        for (int j = 0; j < sizeof(read[i]) / sizeof(char); j++)
        {
            printf("%c", toUpper(read[i][j]));
        }
    }
    fclose(string);
    return 0;
}

char toUpper(char x)
{
    if (x >= 'a' && x <= 'z')
    {
        x = x - 32;
    }
    return x;
}