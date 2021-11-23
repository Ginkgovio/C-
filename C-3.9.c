//字符串旋转（右旋）
#include <stdio.h>
#include <string.h>

void string_left_rotate(char*str, int k)
{
	int i = 0;
	int n = strlen(str);
	//每次右旋一个字符
	for (i = 0; i < k; i++) 
	{
		char temp = *(str+n-1);
		int j = 0;
		//前面的n-1个字符往后挪动
		for (j = n-1 ;j >=0 ; j--) 
		{
			*(str + j) = *(str + j - 1);
		}
		//temp放在开头
		*(str) = temp;
	}

}

int main()
{
	char arr[] = { "ABCDEF" };
	int k = 2;
	string_left_rotate(arr,k);
	printf("%s \n", arr);
	return 0;
}