/*
 * @Author: your name
 * @Date: 2020-02-13 21:25:12
 * @LastEditTime : 2020-02-13 21:47:18
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-7/4.c
 */
#include <stdio.h>

void show(int *a, int n, int m)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", *(a + i * m + j));
        }
        printf("\n");
    }
}

void huhuan(int *a,int n,int m)
{
    int b[m][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            b[j][i] = *(a + i * m + j);
        }
    }
    show(b,3,3);
}

int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    show(a,3,3);

    huhuan(a,3,3);
    return 0;
}