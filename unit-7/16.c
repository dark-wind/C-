/*
 * @Author: your name
 * @Date: 2020-02-14 22:12:44
 * @LastEditTime : 2020-02-14 22:53:35
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-7/16.c
 */
#include <stdio.h>

int main()
{
    char c;
    char input[100];
    int i = 0;
    int sum = 0;
    int temp;
    scanf("%s", input);
    while (input[i] != '\0')
    {
        i++;
    }
    int length = i;

    for (int j = 0; j < length; j++)
    {
        if (input[j] > '0' && input[j] <= '9')
        {
            temp = (int)(input[j] - 48);
        }
        else
        {
            if (input[j] == 'A')
            {
                temp = 10;
            }
            if (input[j] == 'B')
            {
                temp = 11;
            }
            if (input[j] == 'C')
            {
                temp = 12;
            }
            if (input[j] == 'D')
            {
                temp = 13;
            }
            if (input[j] == 'E')
            {
                temp = 14;
            }
            if (input[j] == 'F')
            {
                temp = 15;
            }
        }

        for (int k = 0; k < i - 1; k++)
        {
            temp = temp * 16;
        }
        i--;
        sum = sum + temp;
    }

    printf("%d", sum);
    printf("\n");
    return 0;
}