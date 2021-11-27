//有一个有序数列，从小到大排列，将一个新输入的数插入序列中，保证插入新数后任是有序的
#include <stdio.h>
int main()
{
	int N = 0;
	int arr[51] = { 0 };
	int num = 0;
	int j = 0;
	printf("第一行输入一个整数：>");
	scanf("%d", &N);
	printf("第二行输入N个升序排列的整数：>");
	for (int i = 0; i < N; i++) 
	{
		scanf("%d", &arr[i]);
	}
	printf("第三行输入想要插入的一个整数：>");
	scanf("%d", &num);

	for (j = N - 1; j >= 0; j--)
	{
		if (arr[j] > num)
	    {
			arr[j+ 1] = arr[j];
		}
		else 
		{
			arr[j + 1] = num;
			break;
		}
	}
	
	if (j < 0) 
	{
		arr[0] = num;
	}

	for (int i = 0; i < N + 1; i++) 
	{
		printf("%d ", arr[i]);
	}
	return 0;
}