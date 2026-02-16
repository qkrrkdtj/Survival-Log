#include <stdio.h>


int main(void) {
	int n;

	while (1) {
		int sum = 0;
		scanf("%d", &n);
		if (n == -1) {
			break;
		}
		for (int i = 1; i < n; i++) {
			if (n % i == 0) sum += i;
		}
		
		printf("%d", n);
		if (sum == n) {
			for (int i = 1; i < n; i++) {
				if (n % i == 0) {
					if (i == 1) printf(" = %d", i);
					else printf(" + %d", i);
				}
			}
		}
		else {
			printf(" is NOT perfect.");
		}
		printf("\n");
	}

	return 0;
}