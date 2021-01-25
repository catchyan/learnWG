// lesser.c -- 找出两个整数的较小值
#include<stdio.h>
int imin(int n, int m);
int what_if(int n);

int main(void)
{
    int evil1,evil2;
    printf("Enter a pair of integers (q to quit):\n");
    while (scanf("%d %d", &evil1, &evil2))
    {
        printf("The lesser of %d and %d is %d.\n", evil1, evil2, what_if(evil1));
        printf("Enter a pair of integers (q to quit):\n");
    }
    
    return 0;
}

int imin(int n, int m)
{
    return n > m ? m : n;
}

int what_if(int n)
{
    double z = 100.0 / (double) n;
    return z;
}