#include <stdio.h>

int main() {
	int hour1, minute1;
	int hour2, minute2;
	
	scanf("%d %d %d %d", &hour1, &minute1, &hour2, &minute2);
//	scanf("%d %d", &hour2, &minute2);
	
	int t1 = hour1 * 60 + minute1;
	int t2 = hour2 * 60 + minute2;
	
	int t = t2-t1;
	
	printf("ʱ�����%dСʱ%d��", t/60, t%60);
} 

int main() {
	int a,b;
	scanf("%d %d", &a, &b);
	double c = (a+b)/2.0;
	printf("%d��%d��ƽ��ֵ=%f\n", a, b, c);
}












