/*
 * @Author: your name
 * @Date: 2020-02-14 15:31:05
 * @LastEditTime : 2020-02-14 22:09:51
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-7/15.c
 */
#include <stdio.h>
#include <string.h>
char worker_name[10][200];
int worker_num[10];

void show()
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d %s %d\n", i, worker_name[i], worker_num[i]);
    }
}
void input()
{
    printf("请输入职工姓名和职工号，以空格隔开\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%s %d", worker_name[i], &worker_num[i]);
    }
    printf("输入完毕，当前信息为：\n");
    show();
}
void sort()
{
    char temp_str[200];
    int temp_num;

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (worker_num[i] > worker_num[j])
            {
                temp_num = worker_num[i];
                worker_num[i] = worker_num[j];
                worker_num[j] = temp_num;
                strcpy(temp_str, worker_name[i]);
                strcpy(worker_name[i], worker_name[j]);
                strcpy(worker_name[j], temp_str);
            }
        }
    }
    printf("排序后\n");
    show();
}
int query(int num)
{
    int low = 0, high = 10, mid;
    int flag = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (worker_num[mid] == num)
        {
            flag = 1;
            break;
        }
        else if (worker_num[mid] > num)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return flag ? mid : -1;
}
int main()
{
    input();
    sort();
    int num = 0;
    int rs;
    while (num >= 0)
    {
        printf("请输入要查询的职工号,输入-1退出\n");
        scanf("%d", &num);
        rs = query(num);
        printf("查询结果如下:\n");
        if (rs >= 0)
        {
            printf("职工号为 %d 的员工，姓名为 %s\n", num, worker_name[rs]);
        }
        else
        {
            printf("查询失败，没有此员工号\n");
        }
    }
    return 0;
}

