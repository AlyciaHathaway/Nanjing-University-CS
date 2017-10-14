#include <stdio.h>

int main() {
	printf("输入成绩（0-100）");
	int grade;
	scanf("%d", &grade);
	grade /=10;
	switch ( grade ) {
	case 10:
	case 9:
		printf("A\n");
		break;
	case 8:
		printf("B\n");
		break;
	case 7:
		printf("C\n");
		break;
	case 6:
		printf("D\n");
		break;
	default:
		printf("F\n");
		break;
	}

	return 0;
}


int main() {
	printf("请输入月份：");
	int month;
	scanf("%d", &month);
	switch ( month ) {
		case 1: printf("January\n"); break;
		case 1+1: printf("February\n"); break;
		case 1+2: printf("March\n"); break;
		case 4: printf("April\n"); break;
		case 5: printf("May\n"); break;
		case 6: printf("June\n"); break;
		case 7: printf("July\n"); break;
		case 8: printf("August\n"); break;
		case 9: printf("September\n"); break;
		case 10:printf("October\n"); break;
		case 11:printf("November\n"); break;
		case 12:printf("December\n"); break;
	}

	return 0;
}






