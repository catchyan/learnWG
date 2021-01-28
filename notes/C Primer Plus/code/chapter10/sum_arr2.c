/* sum_arr2.c -- 数组求和(指针写法) */
#include <stdio.h>
#define SIZE 5
int sump(int * start, int * end);
int main(void)
{
    int marbles[SIZE] = {20, 10, 5, 4, 3};// [0],[1],[2]已赋值,其他为0
    long answer;
    answer = sump(marbles, marbles + SIZE);
    printf("The total number of marbles is %ld.\n", answer);
    return 0;
}

int sump(int * start, int * end)
{
    int total = 0;
    while(start < end)
    {
        // total += *start;
        // start++;
        total += *start++;
    }
    return total;
}