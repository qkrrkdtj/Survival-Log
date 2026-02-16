#include <stdio.h>

int main(void) {
	int n;
	int x, y, x_min, x_max, y_min, y_max;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);

		if (i == 0) {
			x_min = x;
			x_max = x;
			y_min = y;
			y_max = y;
		}

		else {
			if (x_min > x) x_min = x;
			else if (x_max < x) x_max = x;
			if (y_min > y) y_min = y;
			else if (y_max < y) y_max = y;
		}
	}

	printf("%d", (x_max - x_min) * (y_max - y_min));

	return 0;
}