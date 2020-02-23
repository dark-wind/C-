/*
 * @Author: your name
 * @Date: 2020-02-20 16:46:52
 * @LastEditTime: 2020-02-20 17:04:36
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/eg/9.12.c
 */
#include <stdio.h>
enum ball
{
    red,
    yellow,
    blue,
    white,
    black
};
void show(ball)
{
    switch (ball)
    {
    case red:
        printf("%s ", "red");
        break;
    case yellow:
        printf("%s ", "yellow");
        break;
    case blue:
        printf("%s ", "blue");
        break;
    case white:
        printf("%s ", "white");
        break;
    case black:
        printf("%s ", "black");
        break;
    default:
        break;
    }
}
int main()
{

    int n = 0;
    for (int i = red; i <= black; i++)
    {
        for (int j = red; j <= black; j++)
        {
            if (i != j)
            {
                for (int k = red; k <= black; k++)
                {
                    if (k != j && k != i)
                    {
                        show(i);
                        show(j);
                        show(k);
                        printf("\n");
                        n++;
                    }
                }
            }
        }
    }
    printf("共有 %d 种可能\n",n);

    return 0;
}