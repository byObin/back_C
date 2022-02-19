#include <stdio.h>

int main() {
	int an;
	int num;
	scanf_s("%d %d",&an,&num);
	int a[10000];
	for (int i = 0; i < an; i++) {
		scanf_s("%d", &a[i]);
	}
	for (int j = 0; j < an; j++) {
		if (num > a[j]) {
			printf("%d ", a[j]);
		}
	}
}