/*
 * @Author: your name
 * @Date: 2020-02-20 18:57:30
 * @LastEditTime: 2020-02-21 10:32:20
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-9/6.c
 */
#include <stdio.h>
#define NUM 13
typedef struct people
{
    int num;
    struct people *next;
} people;

int main()
{
    int count = NUM;
    people p[NUM];
    people *head;
    head = p; //head 指向p[0]
    for (int i = 0; i < NUM; i++)
    {
        head->num = i + 1;
        head->next = &p[i + 1];
        head = head->next;
    }
    p[NUM - 1].next = p; //最后一个元素指向第一个元素 ， 形成环

    int i = 0;
    head = p;
    while (count > 1)
    {
        if (head->num == 0)
        {
            head = head->next;
            continue;
        }
        if (i == 3)
        {
            printf("第 %d 位置被淘汰\n", head->num);
            head->num = 0;
            count--;
        }
        head = head->next;
        i++;
        if (i > 3)
        {
            i = 1;
        }
    }
    printf("--------------\n");
    while (head->num == 0)
    {
        head = head->next;
        if (head->num != 0)
        {
            printf("留到最后的是 %d \n", head->num);
        }
    }

    return 0;
}