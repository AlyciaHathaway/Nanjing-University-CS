#include <stdio.h>

int isPrime(int x);
int main(void) {
	int x;
	scanf("%d", &x);
	if (isPrime(x)) {
		printf("%d是素数\n", x);
	} else {
		printf("%d不是素数\n", x);
	}
	return 0;
} 

// 去掉偶数后，从3到x-1，每次加2
int isPrime(int x) {
	int result = 1;
	int i;
	if (x == 1 || (x%2 == 0 && x!=2)) {
		result = 0;
	}
	for (i=3; i<x; i+=2) {
		if (x%i == 0) {
			result = 0;
			break;
		}
	}
	return result;
} 
