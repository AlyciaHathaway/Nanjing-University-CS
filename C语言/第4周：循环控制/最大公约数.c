#include <stdio.h>

// 第一种：枚举 
int main() {
	int a, b;
	int min;
	
	scanf("%d %d", &a, &b);
	if (a < b) {
		min = a;
	} else {
		min = b;
	}
	int ret = 0;
	int i;
	for (i=1; i<min; i++) {
		if (a%i == 0) {
			if (b%i == 0) {
				ret = i;
			}
		}
	}
	printf("%d和%d的最大公约数是%d", a, b, ret);
}

// 第二种：辗转相除法 
/*如果b等于0，计算结束，a就是最大公约数；
 *否则，计算a除以b的余数，然后让a等于b，而b等于那个余数；
 *回到第一步
 * a  b  t
  12 18 12
  18 12 6
  12 6 0
  6 0
 */ 
int main() {
	int a, b;
	int t;
	scanf("%d %d", &a, &b);
	a=12; b=18;
	while (b != 0) {
		t = a%b;
		a = b;
		b = t;
		printf("a=%d, b=%d, t=%d", a, b, t);
	}
	printf("gcd=%d\n", a);
}












