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

int main() {
	int x;
	int mask = 1;
	scanf("%d", &x);
	
	if (x<0) {
		x *= -1;
		printf("fu ");
	}
	
	int t = x;
	while (t > 9) {
		t /= 10;
		mask *= 10;
	}

	do {
		int digital = x / mask;
//		printf("%d ", digital);
		switch (digital) {
			case 0:
				printf("ling");
				break;
			case 1:
				printf("yi");
				break;
			case 2:
				printf("er");
				break;
			case 3:
				printf("san");
				break;
			case 4:
				printf("si");
				break;
			case 5:
				printf("wu");
				break;
			case 6:
				printf("liu");
				break;
			case 7:
				printf("qi");
				break;
			case 8:
				printf("ba");
				break;
			case 9:
				printf("jiu");
				break;
			default:
				printf("error");
		}
		if (mask > 9) {
			printf(" ");
		}
		x %= mask;
		mask /= 10;
	} while (mask > 0);
	
	return 0;
} 
