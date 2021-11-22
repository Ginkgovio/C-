//插入一个数字
#include <stdio.h>
int main() 
{
	int t,t1;
	int num=0;
	int num1 = 0;
	int arr[11] = { 12,45,67,84,57,95,18,55,66,77 };
	printf("原数组：");
	for (int i = 0; i < 11; i++) 
	{
		printf("%d ", arr[i]);
	}
	printf("\n现在插入一个数字：");
	scanf_s("%d", &num);
	printf("\n现在选择要插入的位置（这里数据保证索引位不会越界）：");
	scanf_s("%d", &num1);
	for (int j = 0; j < 10; j++) 
	{
		if (j == num1) {
			t = arr[j];
			arr[j] = num;
			for (int k = j + 1; k < 11; k++) 
			{
				t1 = arr[k];
				arr[k] = t;
				t = t1;
			}
			break;
		}
	}
	printf("插入数字后的数组：");
	for (int l = 0; l < 11; l++) 
	{
		printf("%d ", arr[l]);
	}

	return 0;
}