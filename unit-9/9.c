/*
 * @Author: your name
 * @Date: 2020-02-21 14:39:43
 * @LastEditTime: 2020-02-21 15:13:35
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-9/9.c
 */
#include <stdio.h>
#include <stdlib.h>
#define COUNT 3
typedef struct LNode
{
    int num;
    struct LNode *next;
} LNode;
LNode *create()
{
    LNode *head, *new, *p;
    head = (LNode *)malloc(sizeof(LNode));
    p = head;
    for (int i = 0; i < COUNT; i++)
    {
        new = (LNode *)malloc(sizeof(LNode));
        new->num = i + 1;
        p->next = new;
        p = p->next;
    }
    return head;
}
void insert(int n, int positon, LNode *root)
{
    while (positon--)
    {
        root = root->next;
    }
    LNode *new = (LNode *)malloc(sizeof(LNode));
    new->num = n;
    new->next = root->next;
    root->next = new;
}
void del(int n, LNode *root)
{
    LNode *pre;
    while (root->num != n)
    {
        pre = root;
        root = root->next;
    }
    pre->next = root->next;
}
void show(LNode *root)
{
    printf("----\n");
    int i = 0;
    while (root != NULL)
    {
        printf("node %d -> %d\n", i, root->num);
        root = root->next;
        i++;
    }
}

int main()
{
    int n, position;
    printf("请输入插入/删除的数，及插入的位置，位置最大为%d\n",COUNT);
    scanf("%d %d", &n, &position);
    LNode *head = create();
    show(head);
    insert(n, position, head);
    show(head);
    del(n, head);
    show(head);
    return 0;
}