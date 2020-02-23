/*
 * @Author: your name
 * @Date: 2020-02-21 10:33:04
 * @LastEditTime: 2020-02-21 14:10:03
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-9/7.c
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

LNode *del(int n, LNode *node)
{
    LNode *pre, *current;
    pre = node;
    current = node->next;
    printf("delete node %d\n", n);
    if (node->num == n)
    {
        node->next = NULL;
        return current;
    }

    while (current != NULL)
    {
        if (current->num == n)
        {
            pre->next = current->next;
            break;
        }
        pre = current;
        current = current->next;
    }
    return node;
}

int main()
{
    LNode *head, *p;
    head = (LNode *)malloc(sizeof(LNode));
    int n;
    p = head; //头节点为0 加上头节点共11个节点
    for (int i = 0; i < 10; i++)
    {
        p = insert(i + 1, p);
    }
    printf("请输入需要删除的节点:1-10\n");
    scanf("%d", &n);
    p = del(n, head);
    int i = 0;
    while (p != NULL)
    {
        printf("p %d.num -> %d\n", i, p->num);
        p = p->next;
        i++;
    }
    return 0;
}