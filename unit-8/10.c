/*
 * @Author: your name
 * @Date: 2020-02-18 16:59:32
 * @LastEditTime: 2020-02-18 17:55:30
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-8/10.c
 */
#include <stdio.h>

void handle(int *arr)
{
    // 遍历降纬并排序
    // 0 数值
    // 1 行号
    // 2 列号
    int lowArr[25][3];
    int max_i;
    int max_j;
    int k = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            lowArr[k][0] = *(arr + i * 5 + j);
            lowArr[k][1] = i;
            lowArr[k][2] = j;
            k++;
        }
    }
    int temp[3];
    //排序
    for (int i = 0; i < 25; i++)
    {
        for (int j = i + 1; j < 25; j++)
        {
            if (lowArr[i][0] > lowArr[j][0])
            {
                temp[0] = lowArr[i][0];
                temp[1] = lowArr[i][1];
                temp[2] = lowArr[i][2];
                lowArr[i][0] = lowArr[j][0];
                lowArr[i][1] = lowArr[j][1];
                lowArr[i][2] = lowArr[j][2];
                lowArr[j][0] = temp[0];
                lowArr[j][1] = temp[1];
                lowArr[j][2] = temp[2];
            }
        }
    }
    int change;
    //中间
    change = *(arr + 5 * 2 + 2);
    *(arr + 5 * 2 + 2) = lowArr[24][0];
    *(arr + lowArr[24][1] * 5 + lowArr[24][2]) = change;
    //左上
    change = *arr;
    *arr = lowArr[0][0];
    *(arr + lowArr[0][1] * 5 + lowArr[0][2]) = change;
    //右上
    change = *(arr + 4);
    *(arr + 4) = lowArr[1][0];
    *(arr + lowArr[1][1] * 5 + lowArr[1][2]) = change;
    //左下
    change = *(arr + 5 * 4 + 0);
    *(arr + 5 * 4 + 0) = lowArr[2][0];
    *(arr + lowArr[2][1] * 5 + lowArr[2][2]) = change;
    //右下
    change = *(arr + 5 * 4 + 4);
    *(arr + 5 * 4 + 4) = lowArr[3][0];
    *(arr + lowArr[3][1] * 5 + lowArr[3][2]) = change;
}
int main()
{
    int arr[5][5];
    int l = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = l;
            l++;
        }
    }
    handle(arr);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}