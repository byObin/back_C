#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i < 10; i++) {
		int r = n * i;
		printf("%d * %d = %d\n", n, i, r);
	}
}