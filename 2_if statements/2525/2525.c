#include <stdio.h>

int main() {
	int h;
	int m;
	int t;
	scanf_s("%d %d", &h, &m);
	scanf_s("%d", &t);

	if (m + t > 59) {
		int newm = (m + t) % 60;
		int newh = (m + t) / 60;
		h += newh;
		
		if (h > 23) {
			h -= 24;
		}
		printf("%d %d", h, newm);
	}
	else {
		m += t;
		printf("%d %d", h, m);
	}
}