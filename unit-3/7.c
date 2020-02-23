/*
 * @Author: your name
 * @Date: 2020-02-01 15:39:53
 * @LastEditTime : 2020-02-02 16:08:06
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-3/7.c
 */
#include <stdio.h>

int main()
{
    // r = 1.5, h = 3
    float r, h;
    const float pi = 3.14f;
    printf("请输入半径和高，用空格分开:\n");
    scanf("%f %f", &r, &h);
    float 圆周长, 圆面积, 圆球表面积, 球体体积, 圆柱体积;
    圆周长 = 2 * pi * r;
    圆面积 = pi * r * r;
    圆球表面积 = pi * r * 4 * r;
    球体体积 = pi * r * r * r * 3 / 4;
    圆柱体积 = pi * r * r * h;
    printf("圆周长=%.2f, 圆面积=%.2f, 圆球表面积=%.2f, 球体体积=%.2f, 圆柱体积=%.2f\n", 圆周长, 圆面积, 圆球表面积, 球体体积, 圆柱体积);
    return 0;
}