#include <stdio.h>

int main() {
	int a, b, c;
	int p;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a == b && b == c) {
		p = 10000 + (a * 1000);
		
	}
	else if (a == b || b==c) {
		p = 1000 + (b * 100);
		
	}
	else if (a == c) {
		p = 1000 + (c * 100);
		
	}
	else {
		if (a > b && a > c) {
			p = a * 100;
		}
		else if (b > a && b > c) {
			p = b * 100;
		}
		else { p = c * 100; }
	}
	printf("%d", p);
}