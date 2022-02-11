#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);
	if (n % 4 == 0) {
		if (n % 100 != 0 || n % 400 == 0) {
			printf("1");
		}
		else{ printf("0"); }

	}
	else { printf("0"); }
}