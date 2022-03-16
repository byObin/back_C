#include <stdio.h>

int main() {
	int n,R;
	char S[20];
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d %s", &R, &S);
		int k = 0;
		while (S[k]) {
			for (int j = 0; j < R; j++) {
				printf("%c", S[k]);
			}
			k++;
		}
		printf("\n");
	}
}