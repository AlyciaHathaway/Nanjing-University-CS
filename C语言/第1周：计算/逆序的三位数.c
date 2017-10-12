//逆序的三位数：
//程序每次读入一个正三位数，然后输出逆序的数字。
//注意，当输入的数字含有结尾的0时，输出不应带有前导的0。
//比如输入700，输出应该是7

#include <stdio.h>

int main(int argc, char**argv) {
	int i = 0;
	scanf("%d", &i);
	printf("%d\n", (i%10)*100 + (i%100/10)*10 + i/100);
	return 0;
} 
