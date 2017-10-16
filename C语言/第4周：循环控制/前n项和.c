#include <stdio.h>

int main() {
	int n;
	int i;
	double sum = 0.0;
	double sigh = 1.0;
	
	scanf("%d", n);
	
	for (i=1; i<=n; i++) {
//		如果是加一个减一个 
		sum += sign/i;
		sigh = -sigh;
	}
	printf("f(%d)=%f\n", n, sum);
	
	return 0;
}
