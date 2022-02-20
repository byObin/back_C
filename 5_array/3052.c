#include <stdio.h>

int main() {
	int input[10];
	int divide[42] = { 0, };
	int num=0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &input[i]);
	}
	for (int j = 0; j < 10; j++) {
		int k = input[j] % 42;
		divide[k]++;
	}
	for (int i = 0; i < 42; i++) {
		if (divide[i] > 1) {
			divide[i] = 1;
		}
		num = num+ divide[i];
	}

	printf("%d", num);
	

}