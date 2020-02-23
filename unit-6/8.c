/*
 * @Author: your name
 * @Date: 2020-02-06 19:21:35
 * @LastEditTime : 2020-02-06 19:54:25
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-6/8.c
 */
#include <stdio.h>

int lineMax(int test[5][5], int line)
{
    int max = 0;
    for (int i = 0; i < 5; i++)
    {
        if (max < test[line][i])
        {
            max = test[line][i];
        }
    }
    return max;
}
int rowMin(int test[5][5], int row)
{
    int min = test[0][row];
    for (int i = 0; i < 5; i++)
    {
        if (min > test[i][row])
        {
            min = test[i][row];
        }
    }
    return min;
}
int main()
{
    int test[5][5] = {
        {1, 5, 10, 10, 5},
        {1, 6, 15, 20, 15},
        {1, 7, 21, 35, 35},
        {1, 8, 28, 56, 70},
        {1, 9, 36, 84, 126}};
    int line_max;
    int row_min;
    for (int i = 0; i < 5; i++)
    {
        line_max = lineMax(test, i);
        for (int j = 0; j < 5; j++)
        {
            row_min = rowMin(test, j);
            if (test[i][j] == line_max && test[i][j] == row_min)
            {
                printf("%d为鞍点\n", test[i][j]);
                printf("横坐标为 %d， 纵坐标为 %d\n", i, j);
            }
        }
    }

    return 0;
}