#include <stdio.h>

int main() {
	int n,a,b,sum;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d %d", &a, &b);
		sum = a + b;
		printf("%d\n", sum);
	}
}