#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void divisors(long long n) {
	long long res = 1;
	for (int i = 2; i <= sqrt(n); i++) {
		int cnt = 0;
		if (n%i == 0) {
			while (n%i == 0) {
				cnt++;
				n /= i;
			}
				res *= (cnt + 1);
		}
	} 
	if (n > 1) {
		res *= 2;
	} 
	printf("So luong cac uoc cua n la : %lld", res);
} 

int main() {
	long long n;
	printf("Nhap mot so nguyen n : ");
	scanf("%lld", &n);
	divisors(n);
	
	return 0;
}
