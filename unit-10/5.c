/*
 * @Author: your name
 * @Date: 2020-02-22 15:34:30
 * @LastEditTime: 2020-02-22 16:37:58
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-10/5.c
 */
#include <stdio.h>
typedef struct student
{
    int num;
    char name[200];
    float grade[3];
} student;

int main()
{
    FILE *grades;
    student s[5];
    float sum = 0;
    if ((grades = fopen("grades", "w")) == NULL)
    {
        printf("create file fail!!!\n");
        return 0;
    }

    for (int i = 0; i < 5; i++)
    {
        scanf("%d %s %f %f %f", &s[i].num, s[i].name, &s[i].grade[0], &s[i].grade[1], &s[i].grade[2]);
        fwrite(&s[i],sizeof(student),1,grades);
        printf("\n");
        sum = sum + s[i].grade[0] + s[i].grade[1] + s[i].grade[2];
    }
    sum = sum / 5;
    fwrite(&sum,sizeof(float),1,grades);


    fclose(grades);
    return 0;
}