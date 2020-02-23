#include <stdio.h>

int main()
{
    //判断点到各个圆心的距离是否大于1
    float x1 = 2, y1 = 2;
    float x2 = -2, y2 = 2;
    float x3 = -2, y3 = -2;
    float x4 = 2, y4 = -2;
    float x, y, dist1, dist2, dist3, dist4;
    scanf("%f %f", &x, &y);
    int h;
    dist1 = (x - x1) * (x - x1) + (y - y1) * (y - y1);
    dist2 = (x - x2) * (x - x2) + (y - y2) * (y - y2);
    dist3 = (x - x3) * (x - x3) + (y - y3) * (y - y3);
    dist4 = (x - x4) * (x - x4) + (y - y4) * (y - y4);
    if (dist1 > 1 && dist2 > 1 && dist3 > 1 && dist4 > 1)
    {
        h = 0;
    }
    else
    {
        h = 10;
    }
    printf("高度为%d\n", h);
    return 0;
}