// designate.c -- 使用指定初始化项目
#include <stdio.h>
#define MONTHS 12
int main(void)
{
    int days[MONTHS] = {31, 28, [4] = 31, 30, 31, [1] = 29};
    for(int index = 0; index < sizeof days / sizeof days[0]; index ++)
        printf("Month %d has %2d days.\n", index + 1, days[index]);
    return 0;
}