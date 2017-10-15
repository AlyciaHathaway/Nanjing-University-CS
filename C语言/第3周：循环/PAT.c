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
		// while一次只能读一个数，所以一次循环结束还要继续读 
		scanf("%d", &number);
	}
	printf("%d %d", odd, even);
} 

/*
 *思路:数字奇偶和数位奇偶相同时记为1，等价于数字与数位之和为偶数时记为1
 *不知道 C 语言的指数怎么求，就用 h 做了累乘
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
        num = num / 10;//删去最后一位数
        h=h*2;
    }
    printf("%d\n",flag);
    return 0;
}





