/*
 * @Author: your name
 * @Date: 2020-02-22 13:05:24
 * @LastEditTime: 2020-02-22 14:09:39
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/eg/10.2.c
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *from, *to;
    char ch;
    if ((from = fopen("filene.txt", "r")) == NULL)
    {
        printf("open read file fail!!\n");
        exit(0);
    }
    if ((to = fopen("to.txt", "w")) == NULL)
    {
        printf("open write file fail!!\n");
        exit(0);
    }
    while (!feof(from))
    {
        ch = fgetc(from);
        fputc(ch, to);
    }
    printf("copy finished\n");
    fclose(from);
    fclose(to);

    return 0;
}