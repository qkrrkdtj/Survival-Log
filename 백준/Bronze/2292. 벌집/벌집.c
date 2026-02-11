#include <stdio.h>


int main(void) {
	int a;
	scanf("%d", &a);

	int n;

	if (a == 1) {
		n = 1;
	}

	int i = 0;
	int b = 0;

	while (1) {
		if (i == 0) {
			b += 1;
		}
		else {
			b += 6 * i;
		}

		if (a <= b) {
			n = i+1;
			break;
		}
		else {
			i++;
		}
		

	}

	printf("%d", n);

	return 0;
}