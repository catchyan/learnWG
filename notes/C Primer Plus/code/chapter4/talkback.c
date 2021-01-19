// talkback.c -- 一个能为你提供一些信息的对话程序
#include <stdio.h>
#include <string.h>
#define DENSITY 62.4
int main(void)
{
    float weight, volume; // 这里的volume是体积的意思
    int size, letters;
    char name[40]; // name是一个有40个字符的数组
    printf("Hi! What's your first name?\n");
    scanf("%s", name);
    printf("%s, what's your weight in pound?\n", name);
    scanf("%f", &weight);
    size = sizeof name;
    letters = strlen(name);
    volume = weight / DENSITY;
    printf("Well, %s, your volume is %100.2f cubic feet.\n", name, volume);
    // 这里的100表示最小宽度,也就是保证一个最小站位,比如这里如果我输入体重300
    // 那么他就会显示一大长传空格加一个数,这一大长串就是100的作用
    printf("Also, your firstname has %d letters.\n", letters);
    printf("and we have %d bytes to store it in.\n", size);
    return 0;
}