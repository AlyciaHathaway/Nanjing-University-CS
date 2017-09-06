#include <stdio.h>

//int main() {
//    printf("Hello World!\n"); 
//    printf("12+34=%d", 12+34); 
//    return 0;
//}

int main() {
	int price = 0;
	printf("请输入金额（元）：");
	scanf("%d", &price);
	int change = 100 - price;
	printf("找您%d元。\n", change);
	return 0;
}
