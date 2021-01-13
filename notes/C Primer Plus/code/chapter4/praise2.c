// praise1.c --使用不同类型的字符串
#include <stdio.h>
#include <string.h>
#define PRAISE "What a super marvelous name!"
int main(void)
{
    char name[40];

    printf("What's your name?\n");
    scanf("%s", name);
    printf("Hello, %s, %s", name, PRAISE);

    printf("Your name of %d letters occupies %d memory cells.\n", strlen(name), sizeof name);
    printf("The phrase of praise has %d letters ", strlen(PRAISE));
    printf("and occupies %d memory cells", sizeof PRAISE);
    
    return 0;
}