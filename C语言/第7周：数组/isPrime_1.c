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

// 从2到x-1测试是否可以整除 
int isPrime(int x) {
	int result = 1;
	int i;
	// 1既不是素数也不是合数 
	if (x == 1) {
		result = 0;
	}
	for (i=2; i<x; i++) {
		if (x%i == 0) {
			result = 0;
			break;
		}
	}
	return result;
}

