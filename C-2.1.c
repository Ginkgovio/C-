//打印这个数二进制中的奇数位和偶数位
#include <stdio.h>
int main(void)
{
	int m = 0;
	scanf_s("%d", &m);
	/*
	m=10
	00000000000000000000000000001010
	*/
	//打印偶数位
	for (int i = 31; i >= 1; i -= 2) 
	{
		printf("%d", (m >> i) & 1);
	}

	printf("\n");

	//打印奇数位
	for (int j = 30; j >= 0; j -= 2) 
	{
		printf("%d", (m >> j) & 1);
	}

    return 0;
}