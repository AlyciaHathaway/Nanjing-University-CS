#include <stdio.h>

//int main() {
//	int x;
//	scanf("%d", &x);
////	�����򡾵��޷�����ĩβ��0�����֡� 
//	int t = 0;
//	do {
//		int d = x%10;
//		t = t*10+d;
//	} while (x > 0);
//	printf("x=%d, t=%d", x, t);
////	�ٷֽ� 
//	x = t;
//	do {
//		int d = x%10;
//		printf("%d", d);
//		// ȥ�����һ�пո� 
//		if (x > 9) {
//			printf(" ");
//		}
//		x /= 10;
//	} while (x > 0);
//	printf("\n");
//	
//	return 0;
//}

int main() {
	int x;
	scanf("%d", &x);
	
	int mask = 1;
	int t = x;
	while (t > 9) {
		t /= 10;
		mask *= 10;
	}
	
	do {
		int d = x / mask;
		printf("%d", d);
		if (mask > 9) {
			printf(" ");
		}
		x %= mask;
		mask /= 10;
	} while (mask > 0);
}



























