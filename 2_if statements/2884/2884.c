#include <stdio.h>

int main() {
	int h;
	int m;
	scanf_s("%d %d", &h, &m);

	
	if (m - 45 < 0) {
		
		h -= 1;
		if (h < 0) {
			h = 23;
		}
		m = (m - 45) + 60;
		printf("%d %d", h, m);
	}
	else {
		m -= 45;
		printf("%d %d", h, m);
	}

}