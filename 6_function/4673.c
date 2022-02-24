#include <stdio.h>

int dn(int n) {
	int sum = 0;
	int newN = n;
	while (newN >0) {
		int num = newN % 10;
		newN /= 10;
		sum += num;
	}
	return n + sum;
}



int main() {
	int a[10001] = { 0, };
	for (int i = 1; i < 10001;i++) {
		int k = dn(i);
		while (k < 10000) {
			a[k]++;
			k = dn(k);
		}
	}
	for (int j = 1; j < 10000; j++) {
		if (a[j] == 0) {
			printf("%d\n", j);
		}
	}
}