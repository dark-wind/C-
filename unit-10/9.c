/*
 * @Author: your name
 * @Date: 2020-02-22 17:35:43
 * @LastEditTime: 2020-02-22 19:31:06
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-10/9.c
 */
#include <stdio.h>
#include <string.h>
typedef struct staff
{
    char name[100];
    int num;
    char sex[10];
    int age;
    char address[1000];
    float money;
    char health[100];
    char education[100];
} staff;

typedef struct staff_simple
{
    char name[100];
    float money;
} staff_simple;

int main()
{
    FILE *employee, *wage;
    staff read[3];
    staff people[3] = {
        {"xioaming", 1, "man", 28, "wuhan", 10000, "good", "university"},
        {"anna", 2, "woman", 23, "shanghai", 20000, "normal", "university"},
        {"nero", 3, "man", 25, "beijing", 11000, "terrible", "university"}};
    
    if ((employee = fopen("employee", "w+")) == NULL)
    {
        printf("write employee fail!!\n");
        return 0;
    }
    fwrite(people, sizeof(staff), 3, employee);
    rewind(employee);
    fread(read, sizeof(staff), 3, employee);

    staff_simple temp[3];
    for (int i = 0; i < 3; i++)
    {
        strcpy(temp[i].name,read[i].name);
        temp[i].money = read[i].money;
    }

    if ((wage = fopen("wage", "w")) == NULL)
    {
        printf("write wage fail!!\n");
        return 0;
    }
    fwrite(temp, sizeof(staff_simple), 3, wage);
    fclose(employee);
    fclose(wage);

    return 0;
}