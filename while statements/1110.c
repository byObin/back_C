#include <stdio.h>

int main() {
	int N;
	int M=-1;
	int count = 0;

	scanf_s("%d", &N);
	
	while (N != M) {
		if (count < 1) {
			M = N;
		}
		if (M < 10) {
			M = M * 10 + M;
			count++;
		}
		else {
			int k = M / 10 + M % 10;
			if (k % 10 == 0) {
				M = (M % 10) * 10;
				count++;
			}
			else {
				M = (M % 10) * 10 + k % 10;
				count++;

			}
		}
		
	}
	printf("%d", count);
	return 0;
}