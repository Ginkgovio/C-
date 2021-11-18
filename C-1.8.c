//计算一个数二进制中1的个数,n&(n-1)
#include <stdio.h>
int Numberof1(int n)
{
	int count = 0;
	while (n) 
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
int main(void)
{
	int i = -1;
	int ret = Numberof1(i);
	printf("ret = %d\n", ret);
	return 0;
}