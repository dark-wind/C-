/*
 * @Author: your name
 * @Date: 2020-02-03 12:53:53
 * @LastEditTime : 2020-02-03 13:10:53
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unti-5/4.c
 */
#include <stdio.h>

int main()
{
    char str;
    int letter = 0, space = 0, num = 0, other = 0;
    while ((str = getchar()) != '\n')
    {
        if (str >= 'a' && str <= 'z')
        {
            letter++;
        }
        else if (str >= 'A' && str <= 'Z')
        {
            letter++;
        }
        else if (str >= '0' && str <= '9')
        {
            num++;
        }
        else if (str == ' ')
        {
            space++;
        }
        else
        {
            other++;
        }
    }
    printf("letter_count = %d\n",letter);
    printf("num_count = %d\n",num);
    printf("space_count = %d\n",space);
    printf("other_count = %d\n",other);
    return 0;
}