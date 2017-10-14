#include <stdio.h>

int main() {
	int BJT;
	int UTC;
	scanf("%d", &BJT);
	if (BJT>=0 & BJT<2400) {
		UTC = BJT - 800;
		if (UTC>=0 & UTC<=2359) {
		printf("%d", UTC);
		}else if (UTC < 0){
			printf("%d", 2400 + UTC);
		}
	}else {
		printf("error: out of range"); 
	}
}

int main() {
	int RS;
	int S;
	int R;
	scanf("%d", &RS);
	
	S = RS%10;
	R = RS/10;
	if (S>=1 & S<=9) {
		switch (S) {
		case 1:
			printf("Faint signals, barely perceptible, ");
			break;
		case 2:
			printf("Very weak signals, ");
			break;
		case 3:
			printf("Weak signals, ");
			break;
		case 4:
			printf("Fair signals, ");
			break;
		case 5:
			printf("Fairly good signals, ");
			break;
		case 6:
			printf("Good signals, ");
			break;
		case 7:
			printf("Moderately strong signals, ");
			break;
		case 8:
			printf("Strong signals, ");
			break;
		case 9:
			printf("Extremely strong signals, ");
			break;
		default:
			printf("error: out of range.");
		}	
	}
	
	if (R>=1 & R<=5) {
		switch (R) {
			case 1:
				printf("unreadable.");
				break;
			case 2:
				printf("barely readable, occasional words distinguishable.");
				break;
			case 3:
				printf("readable with considerable difficulty.");
				break;
			case 4:
				printf("readable with practically no difficulty.");
				break;
			case 5:
				printf("perfectly readable.");
				break;
			default:
				printf("error: out of range.");
		}
	}
	
}












