/*
 * @Author: your name
 * @Date: 2020-02-14 12:15:35
 * @LastEditTime : 2020-02-14 14:05:09
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-7/14.c
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int student[10][5];
void studentAvg()
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum += student[i][j];
        }
        printf("student%d average %.2f\n", i, (float)sum / 5);
        sum = 0;
    }
}
void classAvg()
{
    int sum = 0;

    printf("\n");
    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 10; i++)
        {
            sum += student[j][i];
        }
        printf("class%d average %.2f\n", j + 1, (float)sum / 10);
        sum = 0;
    }
}
void highGrade()
{
    int student_id, class_id;
    int max = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (max < student[i][j])
            {
                max = student[i][j];
                student_id = i;
                class_id = j + 1;
            }
        }
    }
    printf("最高分为 %d ，是学生 %d 的课程 %d\n", max, student_id, class_id);
}
void dx()
{
    double zuo = 0, you;
    double sum2 = 0, sum = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum += student[i][j];
        }
        sum = sum / 5;
        sum2 = sum2 + sum;
        zuo = zuo + sum * sum;
        sum = 0;
    }
    printf("%.2lf\n", sum2);
    zuo = zuo / 10;
    you = sum2 / 10;
    you = you * you;
    printf("方差为 %.2lf\n", zuo - you);
}
int main()
{
    // 模拟输入
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            student[i][j] = rand() % 100;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", student[i][j]);
        }
        printf("\n");
    }
    studentAvg();
    classAvg();
    highGrade();
    dx();

    // 显示优化
    printf("\t");
    for (int i = 0; i < 5; i++)
    {
        printf("  class%d", i + 1);
    }
    printf("  %-6s","sum");
    printf("  %-6s","avg");
    printf("\n");
    int classSum[5]={0};
    for (int i = 0; i < 10; i++)
    {
        int sum=0;
        printf("student%d", i);
        for (int j = 0; j < 5; j++)
        {
            printf("  %-6d", student[i][j]);
            sum+=student[i][j];
            classSum[j]+=student[i][j];
        }
        printf("  %-6d", sum);
        printf("  %-6.2f", (float)sum/5);
        
        printf("\n");
    }
    printf("%-8s", "avg");
    float allSum=0;
    for (int i = 0; i < 5; i++)
    {
        printf("  %-6.2f", (float)classSum[i]/10);
        allSum+=(float)classSum[i]/10;
    }
    printf("  %-6.2f", allSum);
    printf("  %-6.2f", (float)allSum/5);
    printf("\n");
    return 0;
}