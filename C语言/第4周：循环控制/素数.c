#include <stdio.h>

int main() {
	int x;
	int count;
	
//	for (x=2; x<100; x++) {
	for (x=2; count<50; x++) {
		int i;
		int isPrime = 1; // xÊÇËØÊý 
		for (i=2; i<x; i++) {
			if (x%i == 0) {
				isPrime = 0;
				break;
			} 
		}
		if (isPrime == 1) {
			printf("%d ", x);
			count++;
		}
	}
	
	return 0;
}
