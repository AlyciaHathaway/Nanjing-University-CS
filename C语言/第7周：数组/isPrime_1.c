#include <stdio.h>

int isPrime(int x);
int main(void) {
	int x;
	scanf("%d", &x);
	if (isPrime(x)) {
		printf("%d������\n", x);
	} else {
		printf("%d��������\n", x);
	}
	return 0;
} 

// ��2��x-1�����Ƿ�������� 
int isPrime(int x) {
	int result = 1;
	int i;
	// 1�Ȳ�������Ҳ���Ǻ��� 
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

