#include <stdio.h>
int sum(int arr[], int length);
// int sum(int [], int);
// int sum(int *, int);
// int sum(int *arr, int length);
// 以上4种是等价的

int main(void)
{
    int arr[] = {1,2,3};
    printf("%d", sum(arr, sizeof arr/sizeof arr[0]));
}

// int sum(int arr[])
// {
//     int total = 0;
//     printf("%d", sizeof arr);
//     for(int i = 0; i < SIZE; i++)
//         total += arr[i];
//     return total;
// }
// 上面这种做法是错误的,因为在数组作为参数的时候,传递的是指针
// 因此应该讲sum方法改造为(int arr[], int arrlength)

int sum(int arr[], int length)
{
    int total = 0;
    int i;
    for(i = 0;i < length; i++)
        total += arr[i];
    return total;
}