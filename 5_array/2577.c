#include <stdio.h>

int main() {
	int a, b, c;
	int result;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	result = a * b * c;
	int num[10000];
	int i = 0;
	
	while (result != 0) {
		num[i] = result % 10;
		result /= 10;
		i++;
	}
	
	for (int k = 0; k < 10; k++) {
		int count = 0;
		for (int j = 0; j < i; j++) {
			if (num[j] == k) {
				count++;
			}
		}
		printf("%d\n", count);
	}

}