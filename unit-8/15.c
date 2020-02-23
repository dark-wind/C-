/*
 * @Author: your name
 * @Date: 2020-02-19 11:31:32
 * @LastEditTime: 2020-02-19 17:46:37
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-8/15.c
 */
#include <stdio.h>
#include <stdlib.h>

void show(double *student)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%.2lf ", *(student + i * 4 + j));
        }
        printf("\n");
    }
}
void avg1(double *student)
{
    double sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum = sum + *(student + i * 4);
    }
    printf("第一门课平均分 %.2lf\n", sum / 4);
}
void failStudent(double *student)
{
    int count;
    for (int i = 0; i < 4; i++)
    {
        count = 0;
        for (int j = 0; j < 5; j++)
        {
            if (*(student + i * 4 + j) < 60)
            {
                count++;
            }
            if (count > 2)
            {
                printf("学生 %d 有2门不及格\n", i);
                break;
            }
        }
    }
}
void goodStudent(double *student)
{
    int sum;
    int count;
    for (int i = 0; i < 4; i++)
    {
        sum = 0;
        count = 0;
        for (int j = 0; j < 5; j++)
        {
            if (*(student + i * 4 + j) > 85)
            {
                count++;
            }
            sum = sum + *(student + i * 4 + j);
        }
        if (count == 5)
        {
            printf("学生 %d 的5门课均大于85分\n", i);
        }
        else if (sum >= 90 * 5)
        {
            printf("学生 %d 的5门课平均分大于85分\n", i);
        }
    }
}

int main()
{
    double student[4][5];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            student[i][j] = rand() % 100;
        }
    }
    show(student);
    avg1(student);
    failStudent(student);
    goodStudent(student);

    return 0;
}