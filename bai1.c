#include <stdio.h>
#include <stdlib.h>



int main() {
	int n;
	printf("Nhap vao so nguyen n : ");
	scanf("%d", &n);
	
	double S = 0;
	if (n > 0) {
		int i; 
		for (i = 1; i <= n; i++){
				S += 1.0/i;
		}
			printf("S = %.3lf", S);
	}
	else {
		printf("Nhap sai chuong trinh, nhap lai");
	}
	
	return 0;
}
