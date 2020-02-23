/*
 * @Author: your name
 * @Date: 2020-02-02 14:51:18
 * @LastEditTime : 2020-02-02 16:54:08
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-4/8.c
 */
#include <stdio.h>

int main()
{
    int grade, filter = 1;
    char grade_level;
    while (filter)
    {
        printf("请输入成绩，0-100分：\n");
        scanf("%d",&grade);
        if (grade >= 0 && grade <= 100)
        {
            filter = 0;
        }
        else
        {
            printf("超出范围\n");
        }
    }
    switch (grade / 10)
    {
        case 10:
        case 9:
            grade_level = 'A';
            break;
        case 8:
            grade_level = 'B';
            break;
        case 7:
            grade_level = 'C';
            break;
        case 6:
            grade_level = 'D';
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            grade_level = 'E';
        default:
            break;
    }

    printf("%c\n", grade_level);
    return 0;
}