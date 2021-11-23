//杨氏矩阵
#include <stdio.h>

int find_num(int arr[][3], int a, int b, int k) 
{
	int x = 0;
	int y = b - 1;
	while (x < a && y >= 0) 
	{
		if (arr[x][y] > k) 
		{
			y--;
		}
		else if (arr[x][y] < k) 
		{
			x++;
		}
		else 
		{
			printf("%d position is %d %d\n",k, x, y);
			return 1;
		}
	
	}
	return 0;
}

int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 7;
	int ret = find_num(arr, 3, 3, k);
	if (ret == 1) 
	{
		printf("I got it!");
	}
	else 
	{
		printf("sorry bro!");
	}

	return 0;
}