/*
 * @Author: your name
 * @Date: 2020-02-21 17:59:14
 * @LastEditTime: 2020-02-21 20:24:55
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-9/11.c
 */
#include <stdio.h>
typedef struct student
{
    int num;
    double grade;
    struct student *next;
} student;
student *del(student *a, student *b)
{
    student *pre, *current, *head;
    head = a;
    
    while (b != NULL)
    {
        //重制指针指向a链表的头部
        pre = head;
        current = head->next;
        //a 链表的头等于b
        if (pre->num == b->num)
        {
            pre->next = NULL;
            pre = current;
            current = current->next;
            head = pre;
        }
        else
        {
            while (pre->next != NULL)
            {
                if (current->num == b->num)
                {
                    pre->next = current->next;
                    break;
                }
                else
                {
                    pre = pre->next;
                    current = current->next;
                }
            }
        }
        b = b->next;
    }
    return head;
}
int main()
{
    student a[3] = {{1, 79}, {4, 36}, {5, 79}};
    for (int i = 0; i < 2; i++)
    {
        a[i].next = &a[i + 1];
    }

    student b[2] = {{5, 38}, {4, 98}};
    for (int i = 0; i < 1; i++)
    {
        b[i].next = &b[i + 1];
    }
    student *combine = del(a, b);
    while (combine != NULL)
    {
        printf("%d -> %.2lf\n", combine->num, combine->grade);
        combine = combine->next;
    }

    return 0;
}