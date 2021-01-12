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
	printf("Your weight in rhodium is worth $%.2f \n", value);
	printf("You are easily worth that! If rhodium prices drop, \n");
	printf("eat more to maintain your value.\n");
	return 0;
}