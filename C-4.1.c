//模拟memcpy（内存拷贝，memcpy应该拷贝不重叠的内存）
//这个程序不能拷贝重叠内存
//但是库函数里的memcpy可以拷贝重叠内存（VS环境下）
//现实应用只要用于不重叠的内存
#include <stdio.h>
#include <assert.h>
void* my_memcpy( void* dest, const void* src, size_t num) 
{
	void* ret = dest;
	assert(dest && src);
	while (num--) 
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}
int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };
	my_memcpy(arr2, arr1, 20);
	for (int i = 0; i < 5; i++) 
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}