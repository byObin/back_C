#include <stdio.h>

int main() {
	int n, sum = 0;
	scanf("%d", &n);
	char input[100];
	scanf("%s", &input);
	for (int i = 0; i < n; i++) {
		sum += input[i] - '0';
	}
	printf("%d", sum);
}