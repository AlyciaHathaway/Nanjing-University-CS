#include <stdio.h>

int main() {
//	��ʼ��
	int price = 0;
	int bill = 0;
//	�������Ʊ��
	printf("�������");
	scanf("%d", &price);
	printf("������Ʊ�棺");
	scanf("%d", &bill);
//	��������
	if (bill >= price) {
		printf("Ӧ��������%d\n", bill - price);
	}else {
		printf("���Ǯ����\n"); 
	}
	
	return 0; 
}

int main() {
	const double RATE = 8.25;
	const int STANDARD = 40;
	double pay = 0.0;
	int hours;
	
	printf("�����빤����Сʱ����");
	scanf("%d", &hours);
	printf("\n");
	
	if (hours > STANDARD) {
		pay  = STANDARD * RATE + (hours - STANDARD) * (RATE * 1.5);
	}else {
		pay = hours * RATE;
	}
	
	printf("Ӧ�����ʣ�%f\n", pay);
}

int main() {
	const int PASS=60;
	int score;

	printf("������ɼ�: ");
	scanf("%d", &score);
	
	printf("������ĳɼ���%d.\n", score);
	if ( score < PASS )
		printf("���ź�������ɼ�û�м���");
	else {
		printf("ף���㣬����ɼ������ˡ�");
		printf("�ټ�\n");
	}

	return 0;
}













