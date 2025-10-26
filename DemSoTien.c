#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int MoneyDenomination(long long n) {
	int Deno[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
	int cntDeno = 10;
	
	long long remain = n;
	int sumNote = 0;
	for (int i = 0; i < cntDeno; i++) {
		int Denom = Deno[i];
		if (remain >= Denom) {
			int note = remain / Denom;
			sumNote += note;
			remain -= note*Denom;
		}
	} 
	return sumNote;
}


int main() {
	long long n;
	
	do {
	printf("Nhap vao menh gia tien : ");
	scanf("%lld", &n);
		if (n < 1) printf("Menh gia phai lon hon 0!!\n");
	} while (n < 1); 
	
	int res = MoneyDenomination(n);
	printf("%d", res);
	return 0;
} 
