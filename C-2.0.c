//计算两个数二进制中不同的位数的个数
#include <stdio.h>
size_t Numberof1(int ret) 
{
	int count1 = 0;
	while (ret) 
	{
		ret = ret & (ret - 1);
		count1++;
	}
	return count1;
}
int main(void)
{
	int m = 0, n = 0;
	int count = 0;
	scanf_s("%d %d", &m, &n);
	int ret = m ^ n;
	//异或相同为0，相异为1
	//判断里面1的个数就能知道这两个数二进制中不同的位数
	count = Numberof1(ret);
	printf("这两个数中二进制的不同的位数为%d", count);
    return 0;
}