//一个数组的奇数位于前半部分，偶数位于后半部分
#include <stdio.h>
void my_array(int arr[], int sz);
void Print(int arr[], int sz);

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_array(arr, sz);
	Print(arr, sz);
	return 0;
}

void Print(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

}

void my_array(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left < right)
	{
		//从前往后找一个偶数
		while ((left < right) /*防止越界访问*/  && (arr[left] % 2 == 1))
		{
			left++;//不是偶数就接着找下一个
		}

		//从后往前找一个奇数
		while ((left < right) /*防止越界访问*/ && (arr[right] % 2 == 0))
		{
			right--; //不是奇数就接着找下一个
		}

		//交换位置
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}

}