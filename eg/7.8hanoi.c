/*
 * @Author: your name
 * @Date: 2020-02-12 18:58:05
 * @LastEditTime : 2020-02-13 10:51:25
 * @LastEditors  : Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/eg/7.8hanoi.c
 */

#include <stdio.h>
void move(char from, char to)
{
    printf("%c -> %c\n", from, to);
}
void hanoi(int n, char a, char b, char c)
{
    if (n == 1)
    {
        move(a, c);
    }
    else
    {
        hanoi(n - 1, a, c, b);
        move(a, c);
        hanoi(n - 1, b, a, c);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    return 0;
}
// A -> B
// A -> C
// B -> C
// A -> B
// C -> A
// C -> B
// A -> B
// A -> C
// B -> C
// B -> A
// C -> A
// B -> C
// A -> B
// A -> C
// B -> C