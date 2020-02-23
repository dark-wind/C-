/*
 * @Author: your name
 * @Date: 2020-02-20 17:32:07
 * @LastEditTime: 2020-02-20 17:55:47
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-9/3.c
 */
#include <stdio.h>
typedef struct student
{
    int num;
    char name[100];
    double score[3];
} student;

int main()
{
    student s[5];
    for (int i = 0; i < 5; i++)
    {
        printf("请输入第 %d 位学生的学号\n", i);
        scanf("%d", &s[i].num);
        printf("请输入第 %d 位学生的姓名\n", i);
        scanf("%s", s[i].name);
        for (int j = 0; j < 3; j++)
        {
            printf("请输入第 %d 位学生第 %d 科的成绩\n",i,j);
            scanf("%lf", &s[i].score[j]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("学生 %d:\n",i);
        printf("\t学号 %d 姓名 %s ",s[i].num,s[i].name);
        for (int j = 0; j < 3; j++)
        {
            printf("第 %d 科成绩：%lf  ",j,s[i].score[j]);
        }
        printf("\n");
    }
    
    
    return 0;
}