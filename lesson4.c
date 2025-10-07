#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 

int reverse(int n){

	bool kt6 = false; 
	int temp = 0;
	int m = n;
	int sum = 0;
	while(n) {
		temp *= 10;
		temp += n%10;
		sum += temp;
		if (n%10 == 6){
			kt6 = true;
		}
		n /= 10;
	} 
	return m == temp && kt6 && sum%10 == 8; 
}


int main(){
	int a, b;
	
	printf("Nhap vao so :\na = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	
	for (int i = a; i <= b; i++) {
		if (reverse(i)) {
			printf("%d ", i);
		}
	}
}


