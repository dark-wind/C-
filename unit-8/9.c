/*
 * @Author: your name
 * @Date: 2020-02-18 16:10:27
 * @LastEditTime: 2020-02-18 16:53:04
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-8/9.c
 */
#include <stdio.h>

void zhuanzhi(int *a)
{
    int temp;

    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++)
        {
            temp = *(a + i * 3 + j);
            *(a + i * 3 + j) = *(a + j * 3 + i);
            *(a + j * 3 + i) = temp;
        }
    }
    int test = 1;
}

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    zhuanzhi(arr);
    printf("转换后\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}