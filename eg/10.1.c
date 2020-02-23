/*
 * @Author: your name
 * @Date: 2020-02-22 11:06:57
 * @LastEditTime: 2020-02-22 12:58:46
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/eg/10.3.c
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char ch, filename[10];
    printf("input filename\n");
    gets(filename);
    if ((fp = fopen(filename, "w")) == NULL)
    {
        printf("open fail!!!\n");
        exit(0);
    }
    printf("input content\n");
    ch = getchar();
    while (ch != '#')
    {
        fputc(ch, fp);
        putchar(ch);
        ch = getchar();
    }
    fclose(fp);
    putchar(10);
    return 0;
}