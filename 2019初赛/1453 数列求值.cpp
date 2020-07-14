#include <stdio.h>

int solve(int n) {
	if (n <= 3) {
		return 1;
	}
	int a = 1, b = 1, c = 1, res;
	for (int i = 4; i <= n; i++) {
		res = (a + b + c) % 10000;
		a = b;
		b = c;
		c = res;
	}
	return res;
}

int main() {
	printf("%d\n",solve(20190324));
	return 0;
}
