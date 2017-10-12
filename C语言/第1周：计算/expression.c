#include <stdio.h>

int main() {
	int hour1, minute1;
	int hour2, minute2;
	
	scanf("%d %d %d %d", &hour1, &minute1, &hour2, &minute2);
//	scanf("%d %d", &hour2, &minute2);
	
	int t1 = hour1 * 60 + minute1;
	int t2 = hour2 * 60 + minute2;
	
	int t = t2-t1;
	
	printf("时间差是%d小时%d分", t/60, t%60);
} 

int main() {
	int a,b;
	scanf("%d %d", &a, &b);
	double c = (a+b)/2.0;
	printf("%d和%d的平均值=%f\n", a, b, c);
}












