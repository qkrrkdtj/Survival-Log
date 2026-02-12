#include <stdio.h>


int main(void) {
	int n;

	scanf("%d", &n);

	int i = 1;
	int a = 1;
	int b = 1;
	int cnt = 0;

	while(cnt<n){
		if (i % 2 == 0) {
			for (int j = 0; j < i; j++) {
				if (j == 0) {
					a = i;
					b = 1;
				}
				else if (a > 1) {
					a--;
					b++;
				}
				cnt++;
				if (cnt == n) break;
			}
		}
		else {
			for (int j = 0; j < i; j++) {
				if (j == 0) {
					a = 1;
					b = i;
				}
				else if (b > 1) {
					a++;
					b--;
				}
				cnt++;
				if (cnt == n) break;
			}
		}
		
		i++;
	}
	printf("%d/%d", b, a);

	return 0;
}