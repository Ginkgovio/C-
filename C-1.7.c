//计算一个数二进制中1的个数
#include <stdio.h>
int Numberof1(int n) 
{
	int count = 0;
	for (int i = 0; i < 32; i++)//32还是64取决于系统位数
	{
		if (((n >> i) & 1) == 1) //算术右移
		{
			count++;
		}
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