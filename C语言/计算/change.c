#include <stdio.h>

int main() {
	// const��һ�����η�����ʾ�������ɱ������
	const int AMOUNT = 100;
	int price = 0;
	// f�Ǹ�ʽ��format����д
	// �������Ĳ�������������100 
	printf("�������Ԫ����");
	// ��ʽ�ַ���+&����������Ҫ�ڱ���ǰ����ϣ� 
	scanf("%d", &price);
	
	int change = AMOUNT - price;
	printf("����%dԪ��\n", change);

	return 0;
}

// ������C������û��ǿ��Ҫ���ʼ������ʹ��ǰ����Ҫ����һ�θ�ֵ
// ��ʼ���͸�ֵ��C������û�б������𣬵���C++�л��в�ͬ���� 
//int main() {
//	int i;
//	int j;
//	j = i + 10;
//	printf("%d\n", j);
//	
//	return 0; 
//} 

// ��϶������ʱ��Ҳ��������������е�����������������ʼֵ
//int price = 0, amount = 100; 








