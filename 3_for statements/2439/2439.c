#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int k = n; k > i; k--) {
			printf(" ");
		}
		for (int j = 0; j < i ; j++) {
			printf("*");
		}
		printf("\n");
	}
}