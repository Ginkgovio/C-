//杨辉三角
#include <stdio.h>
int main() 
{
	int arr[10][10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <= i; j++) 
		{
			
			if (j == 0) 
			{
				arr[i][j] = 1;
			}
			if (i == j) 
			{
				arr[i][j] = 1;
			}
			if (i >= 2 && j >= 1) 
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}

	}
	for(int k = 0; k < 10; k++) 
	{
		for (int l = 0; l <= k; l++) 
		{
			printf("%d ", arr[k][l]);
		}
		printf("\n");
	}
	return 0;
}