// recur.c -- 递归举例
#include <stdio.h>
void up_and_down(int i);

int main(void)
{
    up_and_down(1);
    return 0;
}

void up_and_down(int i)
{
    printf("Level %d: n location %p\n", i, &i);
    if(i < 4)
        up_and_down(i + 1);
    printf("Level %d: n location %p\n", i, &i);
}