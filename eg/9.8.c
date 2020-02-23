/*
 * @Author: your name
 * @Date: 2020-02-20 15:14:34
 * @LastEditTime: 2020-02-20 15:26:27
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/eg/9.8.c
 */
#include <stdio.h>
struct Student
{
    int num;
    float score;
    struct Student *next;
};

int main()
{
    //head->a->b->c->null
    struct Student a, b, c, *head, *p;
    a.num = 10101;
    a.score = 89.5;
    b.num = 10103;
    b.score = 90;
    c.num = 10107;
    c.score = 85;
    head = &a;
    a.next = &b;
    b.next = &c;
    c.next = NULL;
    p = head;
    do
    {
        printf("%ld %5.1f\n", p->num, p->score);
        p = p->next;
    } while (p != NULL);
    return 0;
}