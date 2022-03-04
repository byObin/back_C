#include <stdio.h>

/*크로아티아 알파벳	변경
č	c=
ć	c-
dž	dz=
đ	d-
lj	lj
nj	nj
š	s=
ž	z=
*/

int main() {
	char input[100];
	scanf("%s", input);
	int i = 0;
	int count = 0;
	while (input[i]) {
		if (input[i] == 'c' && input[i+1]=='=') {
			count++;
			i++;
		}
		else if (input[i] == 'c' && input[i + 1] == '-') {
			count++;
			i++;
		}
		else if (input[i] == 'd' && input[i + 1] == 'z' && input[i + 2] == '=') {
			count++;
			i += 2;
		}
		else if (input[i] == 'd' && input[i + 1] == '-') {
			count++;
			i++;
		}
		else if (input[i] == 'l' && input[i + 1] == 'j') {
			count++;
			i++;
		}
		else if (input[i] == 'n' && input[i + 1] == 'j') {
			count++;
			i++;
		}
		else if (input[i] == 's' && input[i + 1] == '=') {
			count++;
			i++;
		}
		else if (input[i] == 'z' && input[i + 1] == '=') {
			count++;
			i++;
		}
		else { count++; }
		i++;
	}
	
	printf("%d", count);
}