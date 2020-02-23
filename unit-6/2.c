/*
 * @Author: your name
 * @Date: 2020-02-06 17:12:01
 * @LastEditTime : 2020-02-06 17:43:37
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-6/2.c
 */
#include <stdio.h>

int main()
{
    int arr[10] = {2, 31, 6, 864, 1, 22, 78, 32, 343, 72};
    int max, temp;
    for (int i = 0; i < 10; i++)
    {
        max = i;
        for (int j = i + 1; j < 10; j++)
        {
            // 降序排列
            if (arr[max] < arr[j])
            {
                //更新max坐标
                max = j;
            }
        }
        //一轮结束max指向最大的值
        temp = arr[i];
        arr[i] = arr[max];
        arr[max] = temp;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d \n", arr[i]);
    }

    return 0;
}