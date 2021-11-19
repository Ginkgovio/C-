求方程X +Y =N的全部正整数解
#include <stdio.h>
#include <math.h>
int main()
{
	int N = 0;
	scanf_s("%d", &N);
	int flag = 0;
	for (int Y = 1; Y <= sqrt(N)+1; Y++) 
	{

		for (int X = Y; X <= sqrt(N) + 1; X++)
		{
			if (pow(X, 2) + pow(Y, 2) == N) 
			{
				flag = 1;
				printf("%d %d\n", Y, X);
			}
		}
	}
	if (flag == 0) 
	{
		printf("No Solution");
	}
   return 0;
}