#include <stdio.h>

int main() {
	// const是一个修饰符，表示变量不可变的属性
	const int AMOUNT = 100;
	int price = 0;
	// f是格式化format的缩写
	// 如果输入的不是整数，返回100 
	printf("请输入金额（元）：");
	// 格式字符串+&（读数据需要在变量前面加上） 
	scanf("%d", &price);
	
	int change = AMOUNT - price;
	printf("找您%d元。\n", change);

	return 0;
}

// 变量在C语言中没有强制要求初始化，但使用前至少要进行一次赋值
// 初始化和赋值在C语言中没有本质区别，但在C++中会有不同意义 
//int main() {
//	int i;
//	int j;
//	j = i + 10;
//	printf("%d\n", j);
//	
//	return 0; 
//} 

// 组合定义变量时，也可以在这个定义中单独给单个变量赋初始值
//int price = 0, amount = 100; 








