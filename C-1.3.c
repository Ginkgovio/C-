
#include <stdio.h>//排序初步
int max(int arr[], int n);
int main(void)
{
	int arr[] = { 2,45,6,12,87,34,91,25,64,13,7 };
	int len = sizeof(arr) / sizeof(arr[0]);

	for (int i = len - 1; i > 0; i--) 
	{
		int maxid = max(arr, i + 1);
		int t = arr[maxid];
		arr[maxid] = arr[i];
		arr[i] = t;
	}

	for (int i = 0; i <= len - 1; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}

int max(int arr[], int n) 
{
	int maxid = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[maxid] < arr[i])
			maxid = i;
	}

	return maxid;
}