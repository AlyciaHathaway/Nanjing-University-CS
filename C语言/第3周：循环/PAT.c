#include <stdio.h>

int main() {
	int number;
	int odd = 0;
	int even = 0;
	scanf("%d", &number);
	
	while (number != -1) {
		if (number>0 & number<100000) {
			switch (number%2) {
				case 0: 
					even++;
					break;
				case 1:
					odd++;
					break;
			}
		}
		// whileһ��ֻ�ܶ�һ����������һ��ѭ��������Ҫ������ 
		scanf("%d", &number);
	}
	printf("%d %d", odd, even);
} 

/*
 *˼·:������ż����λ��ż��ͬʱ��Ϊ1���ȼ�����������λ֮��Ϊż��ʱ��Ϊ1
 *��֪�� C ���Ե�ָ����ô�󣬾��� h �����۳�
 */

int main() {
    int n=1;
    int h=1;
    int num;
    int flag=0;
    scanf("%d",&num);
 
    while(num != 0) {
        if((num+n)%2==0) {
            flag = flag + h;
        }
        n++;
        num = num / 10;//ɾȥ���һλ��
        h=h*2;
    }
    printf("%d\n",flag);
    return 0;
}





