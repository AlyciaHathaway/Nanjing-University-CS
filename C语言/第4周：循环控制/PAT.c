#include <stdio.h>

int main() {
	int x;
	int m=1,n=1; 
	int count=1;
	int sum=0;
	
	if (n>0 & n<=m & m<=200) {
		scanf("%d %d", &n, &m);
		for (x=2; count<=m; x++) {
			int i;
			int isPrime = 1; // x是素数 
			for (i=2; i<x; i++) {
				if (x%i == 0) {
					isPrime = 0;
					break;
				} 
			}
			if (isPrime == 1) {
				count++;
				// count虽然加1了，但现在却只有加1前的素数				
				if (count > n) {
					sum += x;
				// printf("%d ", x);
				}
			}
		}
		printf("%d", sum);
	}
	
	return 0;
}
