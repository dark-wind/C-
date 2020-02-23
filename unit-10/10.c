/*
 * @Author: your name
 * @Date: 2020-02-22 18:28:53
 * @LastEditTime: 2020-02-22 19:33:58
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /c-lang/unit-10/10.c
 */
#include <stdio.h>
typedef struct staff_simple
{
    char name[100];
    float money;
} staff_simple;
int main()
{
    staff_simple staff[3];
    FILE *fp;
    if ((fp = fopen("wage", "r+")) == NULL)
    {
        printf("read file fail\n");
        return 0;
    }
    fread(staff, sizeof(staff_simple), 3, fp);
    for (int i = 0; i < 2; i++)
    {
        fwrite(&staff[i], sizeof(staff_simple), 1, fp);
    }

    staff_simple read[2];
    fread(read, sizeof(staff_simple), 3, fp);
    for (int i = 0; i < 3; i++)
    {
        printf("%s %.2f\n", read[i].name, read[i].money);
    }

    fclose(fp);

    return 0;
}