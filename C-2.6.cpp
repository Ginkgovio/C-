判断是不是水仙花数（随便范围）
#include <stdio.h>
#include <math.h>
int main() 
{
	int i = 0;
	for (i = 0; i <= 10000; i++) 
	{
		int tmp = i;
		int n = 1;
		while (tmp / 10) 
		{
			n++;
			tmp = tmp / 10;
		}

		tmp = i;
		int sum = 0;
		while (tmp) 
		{
			sum = sum + pow((tmp % 10), n);
			tmp = tmp / 10;
		}

		if (sum == i)
		{
			printf("Congratulations! you got it! :> %d\n",i);
		}
	}

	return 0;
}