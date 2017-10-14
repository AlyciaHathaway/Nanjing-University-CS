#include <stdio.h>

int main() {
//	初始化
	int price = 0;
	int bill = 0;
//	读入金额和票面
	printf("请输入金额：");
	scanf("%d", &price);
	printf("请输入票面：");
	scanf("%d", &bill);
//	计算找零
	if (bill >= price) {
		printf("应该找您：%d\n", bill - price);
	}else {
		printf("你的钱不够\n"); 
	}
	
	return 0; 
}

int main() {
	const double RATE = 8.25;
	const int STANDARD = 40;
	double pay = 0.0;
	int hours;
	
	printf("请输入工作的小时数：");
	scanf("%d", &hours);
	printf("\n");
	
	if (hours > STANDARD) {
		pay  = STANDARD * RATE + (hours - STANDARD) * (RATE * 1.5);
	}else {
		pay = hours * RATE;
	}
	
	printf("应付工资：%f\n", pay);
}

int main() {
	const int PASS=60;
	int score;

	printf("请输入成绩: ");
	scanf("%d", &score);
	
	printf("你输入的成绩是%d.\n", score);
	if ( score < PASS )
		printf("很遗憾，这个成绩没有及格。");
	else {
		printf("祝贺你，这个成绩及格了。");
		printf("再见\n");
	}

	return 0;
}













