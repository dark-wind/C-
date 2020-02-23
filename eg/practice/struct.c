/*
 * @Author: your name
 * @Date: 2020-02-19 20:50:58
 * @LastEditTime: 2020-02-19 22:43:44
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/eg/practice/struct.c
 */
#include <stdio.h>
#include <string.h>
typedef struct student
{
    char name[100];
    int num;
    int age;
} student;

int main()
{
    student s1;
    student *p;
    strcpy(s1.name, "anna");
    s1.num = 1;
    s1.age = 13;
    p=&s1;
    printf("%s\n",s1.name);
    printf("%d\n",p->age);

    return 0;
}