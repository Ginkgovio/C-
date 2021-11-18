//模拟strlen的函数
#include <stdio.h>
#include <assert.h>
size_t MY_Strlen(const char* arr) 
{
	size_t count = 0;
	assert(arr);
while(*arr++ != '\0')
{
	count++;
}
return count;
}

int main(void) 
{
	char arr[] = { "abcdef" };
	int len = MY_Strlen(arr);
	printf("len=%d\n", len);
	return 0;
}