#include<stdio.h>
#include<stdlib.h>
int main() {
	int i = 123456;
	int j = 0;
	int count = 0;
	while (count<3) {
		printf("请输入密码 :");
		scanf("%d", &j);
		if (j == i) {
			printf("欢迎进入，密码正确\n");
			break;
		}
		else {
			printf("密码输入错误，请重新输入！\n");
			count++;
		}if (count == 3) {
			printf("密码输入次数超过3次，请明天再试试吧!\n");
			break;
		}
	}
	system("pause");
	return 0;
}