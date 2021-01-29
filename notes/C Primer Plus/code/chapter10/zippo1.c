// zippo1.c -- 有关zippo的信息
#include <stdio.h>
int main(void)
{
    int zippo[4][2] = { {2,4}, {6,8}, {1,3}, {5.7} };
    printf("  zippo = %p,   zippo + 1 = %p\n", zippo, zippo +1);
    printf("  zippo[0] = %p,   zippo[0] + 1 = %p\n", zippo[0], zippo[0] + 1);
    printf("  *zippo = %p,  *zippo + 1 = %p", *zippo, *zippo + 1);
    /*
    zippo = 000000000061fe00,   zippo + 1 = 000000000061fe08
    zippo[0] = 000000000061fe00,   zippo[0] + 1 = 000000000061fe04
    *zippo = 000000000061fe00,  *zippo + 1 = 000000000061fe04
    上面这两句话说明了,zippo = zippo[0],数组首地址都指向了第一个元素,也就是2
    但是zippo + 1增加了8个地址,zippo[0] + 1只增加了4个地址(一个int占用4个字节)
    */
   printf("   zippo[0][0] = %d\n", zippo[0][0]);
   printf("   *zippo[0] = %d\n", *zippo[0]);
   printf("   **zippo = %d\n", **zippo);
   printf("   zippo[0][0] = %d\n", zippo[0][0]);
    printf("   *(*(zippo + 2) + 1) = %d\n", *(*(zippo + 2) + 1));
    return 0;
}