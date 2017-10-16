#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int fact = 1;
	int i = n; 
//	for (i=1; i<=n; i++) {
//		fact *= i;
//	}

//	for (i=n; i>1; i--) {
//		fact *= i;
//	}

	for (; n>1; n--) {
		fact *= n;
	}
	
	printf("%d!=%d\n", i, fact);
} 
