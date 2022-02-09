#include <stdio.h>

int main() {
	int a1;
	int a2;
	int a3;
	int b1;
	int b2;
	int b3;

	int a;
	int b;
	
	int r1;
	int r2;
	int r3;

	int r;
	scanf_s("%d\n", &a);
	scanf_s("%d", &b);
	
	a1 = a;
	a3 = a1 % 10;
	a1 = a1 / 10;
	a2 = a1 % 10;
	a1 = a1 / 10;
	
	b1 = b;
	b3 =b1 % 10;
	b1 = b1 / 10;
	b2 = b1 % 10;
	b1 = b1 / 10;

	r1 = a * b3;
	r2 = a * b2  ;
	r3 = a * b1 ;
	r = a*b;
	printf("%d\n", r1);
	printf("%d\n", r2);
	printf("%d\n", r3);
	printf("%d\n", r);

}