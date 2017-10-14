#include <stdio.h>

int main() {
	int x;
	int n = 0;
	scanf("%d", &x);
	
// 考虑 x = 0的情况	
	n++;
	x /= 10;
	while (x > 0) {
		n++;
		x /= 10;
	}
	printf("%d\n", n);
}

int main() {
	int x;
	int n = 0;
	scanf("%d", &x);
	
// 考虑 x = 0的情况	
	if (x > 0) {
		while (x > 0) {
		n++;
		x /= 10;
	}else {
		n++;
		x /= 10;
		}
	}
	printf("%d\n", n);
}

int main() {
	int x;
	int n = 0;
	scanf("%d", &x);
	
// 考虑 x = 0的情况	
	while (x > 0) {
		printf("in loop\n");
		n++;
		x /= 10;
		printf("x=%d, n=%d\n", x, n);
	}
	printf("%d\n", n);
}







