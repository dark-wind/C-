/*
 * @Author: your name
 * @Date: 2020-02-20 17:59:31
 * @LastEditTime: 2020-02-20 18:56:24
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-9/5.c
 */
#include <stdio.h>
typedef struct student
{
    int num;
    char name[100];
    double score[3];
} student;
void input(student *s)
{
    for (int i = 0; i < 10; i++)
    {
        printf("请输入第 %d 位学生的学号\n", i);
        scanf("%d", &s[i].num);
        printf("请输入第 %d 位学生的姓名\n", i);
        scanf("%s", s[i].name);
        for (int j = 0; j < 3; j++)
        {
            printf("请输入第 %d 位学生第 %d 科的成绩\n", i, j);
            scanf("%lf", &s[i].score[j]);
        }
    }
}
int main()
{
    student s[10];
    input(s);
    double max_score = 0;
    int max_i;
    double average[3];
    double sum;
    for (int j = 0; j < 3; j++)
    {
        sum = 0;
        for (int i = 0; i < 10; i++)
        {
            sum += s[i].score[j];
            if (s[i].score[j]>max_score)
            {
                max_score = s[i].score[j];
                max_i = i;
            }
            
        }
        average[j] = sum / 10;
    }
    for (int i = 0; i < 3; i++)
    {
        printf("第 %d 门课的平均成绩为 %lf \n",i+1,average[i]);
    }
    printf("最高分学生\n");    
    printf("%d %s\n",s[max_i].num,s[max_i].name);
    sum=0;
    for (int i = 0; i < 3; i++)
    {
        sum+=s[max_i].score[i];
        printf("第 %d 课成绩%lf \n",i,s[max_i].score[i]);
    }
    printf("平均分 %lf\n",sum/3);
    

    return 0;
}