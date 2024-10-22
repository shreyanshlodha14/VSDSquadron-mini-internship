#include <stdio.h>

int main() {
	int digit, sum = 0, n = 5;
	for (digit = 1; digit <= n; ++digit) {
		sum += digit;
	}
	printf("Sum of Numbers from 1 to %d is %d\n", n, sum);
	return 0;
}
