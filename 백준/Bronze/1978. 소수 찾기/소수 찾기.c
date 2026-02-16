#include <stdio.h>


int main(void) {
	int n, a, cnt;
	int cnt_t = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		cnt = 0;
		for (int j = 2; j <= a; j++) {
			if (a % j == 0) {
				cnt++;
			}
		}

		if (cnt == 1) {
			cnt_t++;
		}
	}

	printf("%d", cnt_t);

	return 0;
}