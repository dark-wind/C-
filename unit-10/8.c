/*
 * @Author: your name
 * @Date: 2020-02-22 17:31:06
 * @LastEditTime: 2020-02-22 17:35:38
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-10/8.c
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
    FILE *newfile, *oldfile;
    if ((newfile = fopen("newfile", "r")) == NULL)
    {
        printf("read file newfile fail!!\n");
        return 0;
    }
    if ((oldfile = fopen("stu_sort", "w")) == NULL)
    {
        printf("write file stu_sort fail!!\n");
        return 0;
    }
    student s[6];
    fread(s, sizeof(student), 6, newfile);
    for (int i = 0; i < 6; i++)
    {
        printf("%d %s %.2f %.2f %.2f \n", s[i].num, s[i].name, s[i].grade[0], s[i].grade[1], s[i].grade[2]);
    }
    fwrite(s, sizeof(student), 6, oldfile);

    fclose(newfile);
    fclose(oldfile);
    return 0;
}