/*
 * @Author: your name
 * @Date: 2020-02-06 16:04:02
 * @LastEditTime : 2020-02-06 17:04:34
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-6/1.c
 */
#include <stdio.h>

int main()
{
    // 为了方便，舍弃a[0]不用,取1-100
    int arr[101], temp = 0, is_prime;
    for (int i = 0; i < 101; i++)
    {
        arr[i] = i;
    }
    // 当i是质(素)数的时候，i的所有的倍数必然是合数。如果i已经被判断不是质数了，那么再找到i后面的质数来把这个质数的倍数筛掉。
    // 筛掉的数记为0
    for (int i = 2; i < 101; i++)
    {
        if (arr[i] != 0)
        {
            temp = 0;
            is_prime = 1;
            for (int k = 2; k < i; k++)
            {
                // 如果i不是质数
                if (arr[i] % k == 0)
                {
                    is_prime = 0;
                    break;
                }
            }
            if (is_prime)
            {
                // i是质数
                // 倍数筛选掉
                for (int j = 2;; j++)
                {
                    temp = i * j;
                    if (temp > 101)
                    {
                        break;
                    }
                    else
                    {
                        arr[temp] = 0;
                    }
                }
            }
        }
    }

    for (int l = 0; l < 101; l++)
    {
        if (arr[l] != 0)
        {
            printf("%d ", arr[l]);
        }
    }

    return 0;
}