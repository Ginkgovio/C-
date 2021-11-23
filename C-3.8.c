//杨氏矩阵(优化版)
#include <stdio.h>

int find_num(int arr[][3], int *pa, int *pb, int k)
{
	int x = 0;
	int y = *pb - 1;
	while (x < *pa && y >= 0)
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
			*pa = x;
			*pb = y;
			return 1;
		}

	}
	return 0;
}

int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 7;
	int x = 3;
	int y = 3;
	//&x,&y
	//作用是传入参数和带回值
	int ret = find_num(arr, &x, &y, k);
	if (ret == 1)
	{
		printf("I got it!\n");
		printf("The number position is %d %d", x, y);
	}
	else
	{
		printf("sorry bro!");
	}

	return 0;
}