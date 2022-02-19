#include <stdio.h>

int main() {
	int a;
	int b;
	int result;
	

	while (1)
	{
		scanf_s("%d %d", &a, &b);
		if (a == 0 && b == 0) {
			break;
		}
		result = a + b;
		printf("%d\n", result);
	}
	
	return 0;
}