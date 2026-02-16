#include <stdio.h>


int main(void) {
	int m, n, a;
	int sum = 0;
	int flag = 0;

	scanf("%d%d", &m, &n);

	for (int i = m; i <= n; i++) {
		int cnt = 0;
		for (int j = 2; j <= i; j++) {
			if (i % j == 0) {
				cnt++;
			}
		}

		if (cnt == 1) {
			sum += i;
			if (flag == 0) {
				a = i;
				flag = 1;
			}
		}
	}

	if (sum == 0) {
		printf("%d", -1);
	}
	else {
		printf("%d\n", sum);
		printf("%d", a);
	}

	return 0;
}