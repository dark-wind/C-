/*
 * @Author: your name
 * @Date: 2020-02-16 20:07:05
 * @LastEditTime: 2020-02-16 20:07:06
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/eg/practice/zd-test.c
 */
#include <stdio.h>
#define SIZE 10

int sum(int *ar, int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += ar[i];
    }
    printf("The size of ar is %zd\n", sizeof ar);
    return total;
}
int main()
{
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer;

    answer = sum(marbles, SIZE);
    printf("The total number of marbles is %ld.\n", answer);
    printf("size is %zd\n", sizeof marbles);
    return 0;
}
