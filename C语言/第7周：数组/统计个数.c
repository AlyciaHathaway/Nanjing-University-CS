#include <stdio.h>

int main(void) {
	// 数组大小 
	const int number = 10;
	int x;
	// 定义数组 
	int count[number];
	int i;
	// 初始化数组每一项为0 
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
