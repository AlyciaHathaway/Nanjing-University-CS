#include <stdio.h>

// ��һ�֣�ö�� 
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
	printf("%d��%d�����Լ����%d", a, b, ret);
}

// �ڶ��֣�շת����� 
/*���b����0�����������a�������Լ����
 *���򣬼���a����b��������Ȼ����a����b����b�����Ǹ�������
 *�ص���һ��
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












