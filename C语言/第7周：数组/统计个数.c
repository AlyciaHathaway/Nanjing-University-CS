#include <stdio.h>

int main(void) {
	// �����С 
	const int number = 10;
	int x;
	// �������� 
	int count[number];
	int i;
	// ��ʼ������ÿһ��Ϊ0 
	for (i=0; i<number; i++) {
		count[i] = 0;
	}
	scanf("%d", &x);
	while (x != -1) {
		if (x>=0 && x<=9) {
			count[x]++;
		}
		scanf("%d", &x);
	}
	for (i=0; i<number; i++) {
		printf("%d:%d\n", i, count[i])
	}
} 
