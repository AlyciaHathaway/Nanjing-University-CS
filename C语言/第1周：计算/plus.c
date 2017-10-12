#include <stdio.h>

//int main() {
//	int amount = 100;
//	int price = 0;
//	
//	printf("请输入金额（元）：");
//	scanf("%d", &price);
//	
//	printf("请输入票面（元）：");
//	scanf("%d", %amount);
//	
//	int change = amount - price;
//	
//	printf("找您%d元。\n", change);
//
//	return 0;
//} 

//int main() {
//	int a;
//	int b;
//	printf("请输入两个整数：");
//	scanf("%d %d", &a, &b);
//	printf("%d + %d = %d", a, b, a+b);
//}

// 预期什么值就用什么占位符 
int main() {
	printf("请分别输入身高的英尺和英寸：");
	double foot;
	double inch;
	
	scanf("%lf %lf", &foot, &inch);
	printf("身高是%f米。\n", ((foot + inch / 12) * 0.3048));
	
	return 0;
}
















