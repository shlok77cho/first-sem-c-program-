#include<stdio.h>
int main () {
	int num, temp, sum = 0;
	scanf("%d", &num);
	if(num >= 10000 && num <= 99999) {
		temp = num;
		while (temp > 0) {
			sum += temp % 10;
			temp /= 10;
		}
		printf("%d\n", sum);
	}else{
		printf("Invalid input\n");
	}
	return 0;
}