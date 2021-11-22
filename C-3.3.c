//菱形图形
#include <stdio.h>
int main() {
	unsigned n;
	scanf("%d", &n);
	if (n % 2 != 0) {
		for (int i = 1; i <= n / 2 + 1; i++) {
			for (int j = 1; j <= (n + 1) / 2 - i; j++) {
				printf("  ");
			}
			for (int m = 1; m <= 2 * i - 1; m++) {
				printf("* ");
			}
			printf("\n");
		}

		for (int l = 1; l <= n / 2; l++) {
			for (int space = 1; space <= l; space++) {
				printf("  ");
			}
			for (int k = 1; k <= n - 2 * l; k++) {
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}