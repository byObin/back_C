#include <stdio.h>

int main() {
	int n;
	int a, b;
	int sum[100];
	scanf_s("%d", &n);

	for (int i = 0; n>i; i++) {
		scanf_s("%d %d", &a, &b);
		sum[i] = a + b;
	}
	for (int i = 0; n > i; i++) {
		printf("%d\n", sum[i]);
	}
	
}