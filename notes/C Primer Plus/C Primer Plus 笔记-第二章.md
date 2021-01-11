# 第二章 C语言概述
- 一个简单的C语言实例
```c 
#include <stdio.h>
int main(void)
{
	int num;
	num = 1;

	printf("I am a simple ");
	printf("computer.\n");
	printf("My favorite number is %d because it is first./n", num);
	return 0;
}
```
- 快速简介
	- #include <stdio.h> 表示包含另一个库(stdio.h对输入输出提供支持)
	- int main(void) 函数名为main 返回值类型为int 函数不接收任何参数(void)
	- { 函数体开始
	- int num; 声明变量
	- num = 1; 赋值变量
	- printf("I am a simple "); 函数调用printf()
	- printf("computer.\n"); \n是转义字符,表示打印时另起一行
	- printf("My favorite number is %d because it is first./n", num); %d为数字占位符,表示num显示的位置
- 注释的写法
	- // 单内注释
	- /* <br>
			多行注释<br>
		*/
- 更进一步
```c
// fathm_ft.c -- 把 英寻(fathoms) 转换成英尺(feet)
#include <stdio.h>
int main(void)
{
	int feet, fathoms;
	fathoms = 2;
	feet = 6 * fathoms;
	printf("There are %d feet in %d fathoms!\n", feet, fathoms);
	printf("Yes, I said %d feet!\n", 6 * fathoms);

	return 0;
}
```
- 多个声明
```c
int feet, fathoms;
```
和
```c
int feet;
int fathoms;
```
是等同的

- 多个函数
```c
// two_func.c
#include <stdio.h>
void bulter(void); // 函数声明
int main(void)
{
	printf("I will summon the bulter function.\n");
	bulter();
	printf("Yes, Bring me some tea and writeable CD-ROMS.\n")
	return 0;
}

void bulter(void) // 函数定义
{
	printf("You rang, sir?\n");
}
```