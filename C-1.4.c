#include <stdio.h>//斐波那契数列，递归可以求解，但是效率很低
int count = 0;
int Fib(int n)
{
	if (n == 3)//统计第三个斐波那契数列的计算机次数
		count++;
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	printf("count = %d\n",count);
	return 0;
}