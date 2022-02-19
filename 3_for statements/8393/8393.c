#include <stdio.h>

int main() {
	int n;
	int sum=0;
	scanf_s("%d", &n);
	
	for (int i = 0; i <= n; i++) {
		sum += i;
	}

	printf("%d", sum);
}