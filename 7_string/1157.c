#include <stdio.h>

int main() {
	char S[1000000] = { 0, };
	scanf("%s", &S);
	int alphabet[123] = { 0, };
	int maxalpha,k = 0;
	int max = -1;
	
	while (S[k]) {
		alphabet[S[k]]++;
		k++;
	}

	for (int j = 97; j < 123; j++) {
		alphabet[j - 32] += alphabet[j];
	}
	
	for (int i = 65; i < 91; i++) {
		if (alphabet[i] > max) {
			max = alphabet[i];
			maxalpha = i;
		}
	}
	int count = 0;
	for (int i = 65; i < 91; i++) {
		if (alphabet[i] == max) {
			count++;
		}
	}
	if (count > 1) {
		printf("?");
	}
	else if (count == 1) {
		printf("%c", maxalpha);
	}
}