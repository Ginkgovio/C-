//判断一个数是不是2的N次方,2的N次方，二进制中只有一个1
#include <stdio.h>
int main(void)
{
	int i = 8;
	if ((i & (i - 1)) == 0) 
	{
		printf("%d 是2的N次方\n", i);
	}
	else 
	{
		printf("%d 不是2的N次方\n", i);
	}
	return 0;
}