#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		int a, b,sum;
		scanf_s("%d %d",&a,&b);
		sum = a + b;
		printf("Case #%d: %d + %d = %d\n", i,a,b, sum);
	}
}