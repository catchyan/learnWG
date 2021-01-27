/* no_data.c -- 未经初始化的数组 */
#include <stdio.h>
#define SIZE 4
int main(void){
    int no_data[SIZE]; // 未经初始化的数组
    int i;
    printf("%2s%14s\n", "i", "no_data[i]");
    for(i = 0; i < SIZE; i ++)
        printf("%2d%14d\n", i, no_data[i]);
    return 0;
}