#include <stdio.h>

int main() {
	int num[9];
	for (int i = 0; i < 9; i++) {
		scanf("%d", &num[i]);
	}

	
	int max = 0;
	int maxNum = 0;
	
	for (int i = 0; i < 9; i++) {
		if (num[i] > max) {
			max = num[i];
			maxNum = i;
		}
	}

	printf("%d\n", max);
	printf("%d", maxNum+1);;
	
}