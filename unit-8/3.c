/*
 * @Author: your name
 * @Date: 2020-02-18 11:51:09
 * @LastEditTime: 2020-02-18 12:01:44
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-8/3.c
 */
#include <stdio.h>
#define COUNT 10

void input(int * arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void output(int * arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}
void handle(int * arr, int n)
{
    int minpot = 0;
    int maxpot = 0;
    int min = *arr;
    int max = *arr;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<min){
            min = arr[i];
            minpot=i;
        }
        if(arr[i]>max){
            max = arr[i];
            maxpot=i;
        }
    }
    int temp;
    temp=arr[0];
    arr[0]=arr[minpot];
    arr[minpot]=temp;

    temp=arr[n-1];
    arr[n-1]=arr[maxpot];
    arr[maxpot]=temp;
}
int main()
{
    int arr[COUNT];
    input(arr, COUNT);
    handle(arr, COUNT);
    output(arr, COUNT);

    return 0;
}