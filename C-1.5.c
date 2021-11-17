#include <stdio.h>//斐波那契数列，迭代的方法，这里不考虑整型溢出的问题，只关注运算效率
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2) 
	{
		c = a + b;
		a = b;
		b = c;
		n--;//n不减的话，会进入死循环
	}
	return c;
}
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}