//写一个宏，可以将一个整数的二进制位的奇数位和偶数位交换
#include <stdio.h>
#define SWAP(N) ((n & 0xaaaaaaaa) >> 1) + ((n & 0x55555555) << 1)
int main()
{
	int n = 10;
	int ret = SWAP(num);/*((n & 0xaaaaaaaa) >> 1) + ((n & 0x55555555) << 1);*/
	printf("%d\n", ret);
	return 0;
}