/*
 * @Author: your name
 * @Date: 2020-02-14 09:58:43
 * @LastEditTime : 2020-02-14 10:27:19
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-7/10.c
 */
#include <stdio.h>
void longWord(char *a)
{
    //记录单词起始下表，长度大于最多，则更换下标
    int start;
    int temp_start;
    int maxcount = 0;
    int count = 0;
    int flag = 1; //1表示空置 0表示正在计数
    for (int i = 0; i < 100; i++)
    {
        if (flag)
        {
            if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
            {
                temp_start = i;
                count++;
                flag = 0;
            }
        }
        else
        {
            if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
            {
                count++;
            }
            if (a[i] == ' ')
            {
                flag = 1;
                if (count > maxcount)
                {
                    start = temp_start;
                    maxcount = count;
                } //否则不变
                count = 0;
            }
        }
    }
    printf("最长的单词是 \n");
    for (int j = start; j < start + maxcount; j++)
    {
        printf("%c", a[j]);
    }
    printf("\n");
}
int main()
{
    char a[100];
    gets(a);
    longWord(a);
    return 0;
}