#include <stdio.h>

int main() {
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);

	int max = 0;

	if ( a>b ) {
		if ( a>c ) {
			max = a;
		} else {
			max = c;
		}
	} else {
		if ( b>c ) {
			max = b;
		} else {
			max = c;
		}
	}

	printf("The max is %d\n", max);

	return 0;
}

int main() {
	int x;

	scanf("%d", &x);

	int f=0;
	if ( x < 0 ) {
		f = -1;
	} else if ( x == 0 ) {
		f = 0;
	} else if ( x >5 ) {
		f = 2 * x;
	} else {
		f = 3*x;
	}

	printf("%d\n", f);

	return 0;
}
