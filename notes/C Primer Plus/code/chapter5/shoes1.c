/* shoes2.c -- 把一双鞋的尺码转换成英尺 */
#include <stdio.h>
#define ADJUST 7.64
#define SCALE 0.325
int main(void)
{
    double shoe, foot;
    printf("Shoe size (men's)     foot length\n");
    shoe = 3.0;
    while(shoe < 18.5)
    {
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f %15.2f inches\n", shoe, foot);
        shoe = shoe + 1;
    }
    printf("if the shoe fits, wear it.\n");
    return 0;
}