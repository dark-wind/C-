/*
 * @Author: your name
 * @Date: 2020-02-22 14:54:32
 * @LastEditTime: 2020-02-22 15:29:40
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-10/4.c
 */
#include <stdio.h>

int main()
{
    FILE *A, *B;
    char str[100];
    int i = 0;
    if ((A = fopen("A", "r")) == NULL)
    {
        printf("open file A fail!!!\n");
        return 0;
    }

    if ((B = fopen("B", "r")) == NULL)
    {
        printf("open file B fail!!!\n");
        return 0;
    }
    while (!feof(A))
    {
        str[i] = fgetc(A);
        i++;
    }
    while (!feof(B))
    {
        str[i] = fgetc(B);
        i++;
    }
    char temp;
    for (int j = 0; j < i; j++)
    {
        for (int k = j + 1; k < i; k++)
        {
            if (str[j] > str[k])
            {
                temp = str[j];
                str[j] = str[k];
                str[k] = temp;
            }
        }
    }
    FILE *C;
    if ((C = fopen("C", "w")) == NULL)
    {
        printf("open file C fail!!!\n");
        return 0;
    }
    fputs(str, C);
    fclose(C);
    fclose(A);
    fclose(B);
    return 0;
}