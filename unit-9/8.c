/*
 * @Author: your name
 * @Date: 2020-02-21 13:19:02
 * @LastEditTime: 2020-02-21 13:20:22
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-9/8.c
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct LNode
{
    int num;
    struct LNode *next;
} LNode;

LNode *insert(int n, LNode *node)
{
    LNode *new = (LNode *)malloc(sizeof(LNode));
    new->num = n;
    node->next = new;
    node = node->next;
    return node;
}
int main()
{
    LNode *head, *p;
    head = (LNode *)malloc(sizeof(LNode));
    int n;
    p = head;
    do
    {
        scanf("%d", &n);
        p = insert(n, p);
    } while (n != 0);
    int i = 0;
    while (head != NULL)
    {
        printf("head %d.num -> %d\n", i, head->num);
        head = head->next;
        i++;
    }
    return 0;
}