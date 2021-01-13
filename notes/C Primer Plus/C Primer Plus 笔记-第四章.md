# 第三章 数据和C

- 前导程序
```c
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
    printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
    printf("Also, your firstname has %d letters.\n", letters);
    printf("and we have %d bytes to store it in.\n", size);
    return 0;
}
```

- 字符串简介<br>
	字符串(character string)就是一个或多个字符的序列:如"abc"
	- char数组类型和空字符<br>
	![图4.1](https://github.com/catchyan/learnWG/blob/main/resource/img/C-4.1.jpg)<br>
	最后的\0为空字符,用于标记字符串的结尾
	- 使用字符串<br>
	[例:praise1.c](https://github.com/catchyan/learnWG/blob/main/notes/C%20Primer%20Plus/code/chapter4/praise1.c)
	注意这里输入带空格的两个单词只会展示一个,因为scanf遇到blank,tab,newline时会停止扫描<br>
	__字符串和字符__<br>
	字符串常量"x"和字符常量'x'不同.'x'属于基本类型,"x"属于派生类型(char数组),"x"由两个字符组成('x'和'\0')
	- strlen()函数<br>
	[例:praise2.c](https://github.com/catchyan/learnWG/blob/main/notes/C%20Primer%20Plus/code/chapter4/praise2.c)

- 常量和C预处理器
