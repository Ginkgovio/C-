//输出6……1000之间的所有完数（1个数的因子之和等于其自身的数：6=1+2+3；28=1+2+4+7+14;则6，28是完数）
#include“stdio.h”
int is(int n);
void two (int num);
int main()
{
	for (int i = 6; i < 1000; i++)
	{
		if (is(i) == 1)
		{
			two (i);
		}
	}
	return 0;
}

//1.用循环判断该数是不是完数
int is(int n)
{
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}

	}
	return sum == n ? 1 : 0;

}

//和is函数一样，再用循环找一次目标数字的因子，并且把它打印出来
void two (int num)
{
	printf("%d = 1", num);//把第一个因子打印出来，也就是1，循环从2开始
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("+ %d", i);
		}
	}
	printf("\n");
}