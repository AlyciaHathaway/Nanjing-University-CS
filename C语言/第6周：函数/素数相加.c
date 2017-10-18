#include <stdio.h>

int isPrime(int i) {
	int k;
	int result = 1; // xÊÇËØÊı 
	for (k=2; k<i-1; k++) {
		if (i%k == 0) {
			result = 0;
			break;
		}
	}
	return result;
} 

int main() {
	int m,n;
	int sum = 0;
	int count = 0;
	int i;
	
	scanf("%d %d", &m, &n);
	if (m == 1) {
		m = 2;
	}
	for (i=m; i<=n; i++) {
		if (isPrime(i)) {
			sum += i;
			count++;
		}
	}
	printf("%d %d\n", count, sum);
	return 0;
}
