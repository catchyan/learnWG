// flc.c -- 有趣的常量
#include <stdio.h>
#define COLS 4
int sum2d(int ar[][COLS], int rows);
int sum(int ar[], int n);
int main(void)
{
    int total1, total2, total3;
    int * pt1;
    int (*pt2) [COLS]; // 声明一个名为pt2的指向int[COLS]的指针
    pt1 = (int [2]) {10, 20};
    pt2 = (int [2][COLS]) { { 1, 2, 3, 4 }, { 5, 6, 7, 8 } };

    total1 = sum(pt1, 2);
    total2 = sum2d(pt2, 2);
    total3 = sum((int []){3,4,5,6,7}, 5);
    printf("total1 = %d", total1);
    printf("total2 = %d", total2);
    printf("total3 = %d", total3);
}
int sum(int ar[], int n)
{
    int i;
    int total = 0;
    for (i = 0; i < n; i++)
        total += ar[i];
    return total;
}

int sum2d(int ar[][COLS], int n)
{
    int i;
    int j;
    int total = 0;
    for (i = 0; i < n; i++)
        for (j = 0; i < COLS; i++)
            total += ar[i][j];
    return total;
}