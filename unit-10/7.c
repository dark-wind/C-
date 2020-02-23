/*
 * @Author: your name
 * @Date: 2020-02-22 17:00:57
 * @LastEditTime: 2020-02-22 17:30:17
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-10/7.c
 */
#include <stdio.h>
#include <string.h>
typedef struct student
{
    int num;
    char name[200];
    float grade[3];
} student;
int main()
{
    FILE *fp;
    if ((fp = fopen("grades", "r")) == NULL)
    {
        printf("read fail!!! \n");
        return 0;
    }
    student s[6]; //比原来多一个学生多位置
    for (int i = 0; i < 5; i++)
    {
        fread(&s[i], sizeof(student), 1, fp);
        printf("%d %s %.2f %.2f %.2f \n", s[i].num, s[i].name, s[i].grade[0], s[i].grade[1], s[i].grade[2]);
    }
    float average;
    fread(&average, sizeof(float), 1, fp);
    printf("average = %.2f\n", average);
    fclose(fp);

    // 插入一个学生
    scanf("%d %s %f %f %f", &s[5].num, s[5].name, &s[5].grade[0], &s[5].grade[1], &s[5].grade[2]);
    printf("insert student's average grade is %.2f\n", (s[5].grade[0] + s[5].grade[1] + s[5].grade[2]) / 3);
    student temp;
    // 排序
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (s[i].grade[0] + s[i].grade[1] + s[i].grade[2] < s[j].grade[0] + s[j].grade[1] + s[j].grade[2])
            {
                temp.num = s[i].num;
                strcpy(temp.name, s[i].name);
                temp.grade[0] = s[i].grade[0];
                temp.grade[1] = s[i].grade[1];
                temp.grade[2] = s[i].grade[2];

                s[i].num = s[j].num;
                strcpy(s[i].name, s[j].name);

                s[i].grade[0] = s[j].grade[0];
                s[i].grade[1] = s[j].grade[1];
                s[i].grade[2] = s[j].grade[2];

                s[j].num = temp.num;
                strcpy(s[j].name, temp.name);
                s[j].grade[0] = temp.grade[0];
                s[j].grade[1] = temp.grade[1];
                s[j].grade[2] = temp.grade[2];
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d %s %.2f %.2f %.2f \n", s[i].num, s[i].name, s[i].grade[0], s[i].grade[1], s[i].grade[2]);
    }
    // 插入新文件
    FILE *newfile;
    if ((newfile = fopen("newfile", "w")) == NULL)
    {
        printf("write new file fail\n");
        return 0;
    }
    fwrite(s, sizeof(student), 6, newfile);
    fclose(newfile);

    return 0;
}
