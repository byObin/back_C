#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int element = 1;
	int i = 0;
	while (element <= n - 1) {
		i++;
		element += 6*i;
		
	}
	printf("%d", i + 1);

}