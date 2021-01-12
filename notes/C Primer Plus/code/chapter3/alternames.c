/* alternames.c 可移植的整数类型名 */
#include <stdio.h>
#include <inttypes.h>
int main(void)
{
  int16_t me16;
  me16 = 4539;
  printf("First, assume int16_t is short: ");
  printf("me16 = %hd\n", me16); // 输出 4539
  printf("Next, let's not make any assumptions.\n");
  printf("Instead, use a \"macro\" from inttypes.h:\n");
  printf("me16 = %" PRId16 "\n", me16); // 输出 4539
  printf("test1" "test2" "test3"); // C语言将连续字符串合并为一个引号引起来的串
  // 这里输出为test1test2test3
  return 0;
}