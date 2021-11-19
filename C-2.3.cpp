//斐波那契数列（分子分母都是）
#include <stdio.h>
int main()
{
	float a = 1, b = 2;
	float sum = 0;
	float temp = 0;
	for (int i = 0; i < 20; i++) 
	{
		sum += (b / a);
		temp = a;
		a = b;
		b = temp + b;
	}
	printf("%.2f", sum);
	return 0;
}