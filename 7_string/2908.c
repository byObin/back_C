#include <stdio.h>

int main() {
	int a, b;
	char S[1000000];
	gets(S);
	int i = 0;
	a = (S[0]-'0') + (S[1]-'0') * 10 + (S[2]-'0') * 100;
	b= (S[4]-'0') + (S[5]-'0') * 10 + (S[6]-'0') * 100;

	if (a > b) {
		printf("%d", a);
	}
	else if (a < b) {
		printf("%d", b);
	}
}