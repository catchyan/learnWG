#include <stdio.h>

int main(void)
{
    double rates[5] = {88.99, 100.12, 59.45, 183.11, 340.5};
    const double locked[4] = {0.08, 0.075, 0.0725, 0.087};
    const double arr2[2][2] = {
        {2.2, 3.3},
        {2.3, 3.4}
    };
    const int i = 0;
    // *pd = 29.89; 不允许
    // pd[2] = 222.22; 不允许
    // 上面两句话都是不允许的,所以我们定义方法时可以用类似于:
    // void show_array(const double *ar, int n);
    // 这样保证了方法不能修改数组内容
    rates[0] = 99.99; // 允许
    const double *pd = rates;
    pd++; // 允许,说明:const指针可以++, --操作
    // i++; 不允许,const整型不能自增
    pd = locked; // 允许
    pd = rates; // 允许
    pd = &rates[1]; // 允许
    pd = arr2[1]; // 允许
    // 以上说明了,const修饰的指针指示保证了"它所指向的内容不能被修改",而不是它本身不能被修改
    return 0;
}