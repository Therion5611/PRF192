#include <stdio.h>
#include <math.h>

int sphenic(int n) {
	int res = 0;
	for (int i = 2; i <= sqrt(n); i++) {
		int count = 0;
		while(n%i==0) {
			count++;
			n/=i;
		}
		if (count >= 2) return 0;
		if (count == 1) res++;
	}
	if (n > 1) res++;
	return res == 3;
	
}

int main(){
	int n;
	printf("Nhap vao so n : ");
	scanf("%d", &n);
	
	int result = sphenic(n);
	
	(result == 1) ? printf("%d", result) : printf("0"); 
	
	return 0;
} 
