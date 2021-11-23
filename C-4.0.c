//字符串旋转（左旋）
#include <stdio.h>
#include <string.h>
#include <assert.h>

//三步反转法
void reverse(char* left, char* right) 
{
	assert(left);
	assert(right);
	while (left < right) 
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}

}

void string_left_rotate(char*str, int k)
{
	assert(str);
	int n = strlen(str);
	reverse(str, str + k - 1);
	reverse(str + k, str + n - 1);
	reverse(str, str + n - 1);
}

int main()
{
	char arr[] = { "ABCDEF" };
	int k = 2;
	string_left_rotate(arr,k);
	printf("%s \n", arr);
	return 0;
}