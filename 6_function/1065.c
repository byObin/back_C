#include <stdio.h>

int Han(int n) {
	int count = 0;
	for (int i = 1; i <= n; i++) {
		if (i < 100) {
			count++;
		}
		else if(i>=100 && i<1000){
			int num,d1, d2, d3;
			num = i;
			d1 = num % 10;
			num = num / 10;
			d2 = num % 10;
			num = num / 10;
			d3 = num % 10;
			if (d1 + d3 == d2 * 2) {
				count++;
			}
		}
	}
		
	
	return count;
}



int main() {
	int N;
	scanf("%d",&N);
	printf("%d", Han(N));
}