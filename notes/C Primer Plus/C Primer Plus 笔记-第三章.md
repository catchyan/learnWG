# 第三章 数据和C

- 示例程序
```c
#include <stdio.h> // 用金属铑衡量您的体重
int main(void)
{
	float weight;
	float value;
	printf("Are you worth your weight in rhodium?\n");
	printf("Let's check it out\n");
	printf("Please enter your weight in pounds: ");
	/* 用户处获得输入 */
	scanf("%f", &weight);
	value = 770 * weight * 14.5833;
	printf("Your weight in rhodium is worth $%.2f \n");
	printf("You are easily worth that! If rhodium prices drop, \n");
	printf("eat more to maintain your value.\n");
	return 0;
}
```
- 此程序中的新元素
	- float可以处理带有小数点的数字
	- %f在打印中表示浮点数的占位符,%.2f也是占位符,表示该浮点数再显示的时候保留小数点后2位
	- scanf函数用于接收用户输入.%f代表从键盘读入一个浮点数.&符号下一章再讲

- 常量与变量
	- 示例程序中,770为常亮,weight为变量,变量的值可以再程序执行过程中指定和变化,常量不行
	- C语言数据类型:

	| 原来的K&R关键字 | C90关键字 | C99关键字 |
	| - | - | - |
	| int | signed | _Bool |
	| long | void | _Complex |
	| short | | _Imaginary |
	| unsigned | | |
	| char | | |
	| float | | |
	| double | | |

- 整数类型与浮点数类型
	- 整数没有小数部分,正数直接以二进制数字存储,负数则以补码方式存储<br>
	![图3.2](https://github.com/catchyan/learnWG/blob/main/resource/img/C-3.2.jpg)<br>
	如图:7在存储中为:00000111,-128为10000000,127为01111111
	浮点数有指数部分表示<br>
	![图3.2](https://github.com/catchyan/learnWG/blob/main/resource/img/C-3.3.jpg)<br>
- C数据类型
	- int类型
		- 声明int变量:略
		- 初始化变量:略
		- int类型常量:略
		- 打印int值:
			- printf函数如果格式说明符的个数和参数个数不匹配,则会使用内存中的任意值提供打印值
		- 显示八进制数和十六进制数
			- %d 十进制
			- %o 八进制
			- %x 十六进制
	- 其他整数类型:略
	- 打印short, long, long long, unsigned
		- short: %h 如:%hd,%hx,%ho
		- long: %l 如:%ld,%lx,%lo
	- 使用字符: char类型
		- 变量声明:<br>
			char response;<br>
			char itable, latan;
		- 字符常量及其初始化
			char grade = 'A'
		- 非打印字符:转义
	- _Bool 类型
	- 可移植的类型:inttypes.h
		- 详见代码alternames.c
	- float, double, long double 类型
		- 声明变量:略
		- 浮点常量及初始化
			- 3.1415926<br>
			- .2<br>
			- 4e16<br>
			- .8E-5<br>
			- 100.<br>
		- 类型大小:见typesize.c
