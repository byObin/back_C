#include <stdio.h>

int main() {
	int n;
	double sum = 0;
	scanf("%d", &n);
	int score[1000];
	double newScore[1000];
	for (int i = 0; i < n; i++) {
		scanf("%d", &score[i]);
	}
	int M = 0;
	for (int i = 0; i < n; i++) {
		if (score[i] > M) {
			M = score[i];
		}
	}
	for (int i = 0; i < n; i++) {
		newScore[i] = ((double)score[i] / M) * 100;
		sum += newScore[i];
	}
	printf("%f", sum / n);
}