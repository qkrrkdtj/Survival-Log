#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);

	if (a >= (b + c)) a = b + c - 1;
	else if (b >= (a + c)) b = a + c - 1;
	else if (c >= (a + b)) c = a + b - 1;
	
	printf("%d", a + b + c);

	return 0;
}