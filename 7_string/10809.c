#include <stdio.h>

int main() {
	char S[100]={0,};	
	scanf("%s", &S);
	
	int num[26];
	for (int k = 0; k < 26; k++) {
		num[k] = -1;
	}
	for (int i = 0; i < sizeof(S); i++) {
		if (num[S[i]-'a'] == -1) {
			num[S[i]-'a'] = i;
		}
		
	}
	for (int j = 0; j < 26; j++) {
		printf("%d ", num[j]);
	}
}
 