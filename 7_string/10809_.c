#include <stdio.h>

int main() {
	char S[100]={0,};	
	scanf("%s", &S);
	
	int num[123];
	for (int k = 0; k < 123; k++) {
		num[k] = -1;
	}
	for (int i = 0; i < 100; i++) {
		if (num[S[i]] == -1) {
			num[S[i]] = i;
		}
		
	}
	for (int j = 97; j < 123; j++) {
		printf("%d ", num[j]);
	}
}

