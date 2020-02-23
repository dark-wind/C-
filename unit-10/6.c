/*
 * @Author: your name
 * @Date: 2020-02-22 15:54:50
 * @LastEditTime: 2020-02-22 17:12:36
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-10/6.c
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
    //读取信息到结构体数组
    student s[5];
    for (int i = 0; i < 5; i++)
    {
        fread(&s[i], sizeof(student), 1, fp);
        printf("%d %s %.2f %.2f %.2f \n", s[i].num, s[i].name, s[i].grade[0], s[i].grade[1], s[i].grade[2]);
    }
    float average;
    fread(&average, sizeof(float), 1, fp);
    printf("average = %.2f\n", average);

    student temp;
    // 排序
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
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
    // 写入新文件
    FILE *newfile;
    if ((newfile = fopen("stu_sort", "w")) == NULL)
    {
        printf("read fail!!! \n");
        return 0;
    }
    for (int i = 0; i < 5; i++)
    {
        fwrite(&s[i],sizeof(student),1,newfile);
        printf("%d %s %.2f %.2f %.2f \n", s[i].num, s[i].name, s[i].grade[0], s[i].grade[1], s[i].grade[2]);
    }

    fclose(fp);
    return 0;
}
