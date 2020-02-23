/*
 * @Author: your name
 * @Date: 2020-02-21 20:25:20
 * @LastEditTime: 2020-02-21 22:08:08
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-9/12.c
 */
#include <stdio.h>
typedef struct student
{
    int num;
    char sex[10];
    char name[100];
    int age;
    struct student *next;
} student;

int main()
{
    student a[] = {{1, "woman", "apple", 12}, {4, "woman", "banbana", 36}, {5, "man", "candy", 79}, {5, "man", "danny", 36}, {4, "man", "enjoy", 98}};
    for (int i = 0; i < 4; i++)
    {
        a[i].next = &a[i + 1];
    }
    int n;
    scanf("%d", &n);
    student *pre = a, *current = a->next, *head;
    head = a;
    while (current != NULL)
    {
        if (head->age == n)
        {
            pre->next = NULL;
            pre = current;
            current = current->next;
            head = pre;
        }
        else
        {
            if (current->age == n)
            {
                pre->next = current->next;
            }
            pre = current;
            current = current->next;
        }          
    }
    while (head != NULL)
    {
        printf("num:%d, sex: %s, name: %s, age: %d\n", head->num, head->sex, head->name, head->age);
        head = head->next;
    }

    return 0;
}