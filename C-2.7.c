//假设给20元，一瓶汽水一元，两个空瓶换一瓶汽水，问总共喝了多少瓶
#include <stdio.h>
int main() 
{
	int money = 0;
	scanf_s("%d", &money);
	int total = money;
	int empty = money;
	while (empty >= 2) 
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	
	}
	printf("%d", total);
	return 0;
}