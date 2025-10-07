#include <stdio.h>
#include <stdlib.h>

//Khai bao ham chuyen doi
void cd(double *a, double *b) {
	
	double tg = *a;
	*a = *b;
	*b = tg;
		
} 

int main() {
	//Nhap vao hai so  
	double a, b;
	printf("Nhap vao hai so a va b :\n");   
    printf("a = ");
    scanf("%lf", &a);   
    printf("b = ");
    scanf("%lf", &b);
	  
	//Tien hanh chuyen doi;
	cd(&a, &b);
	
	//result
	printf("Sau khi chuyen doi : \n");
	printf("a = %.2lf \nb = %.2lf", a, b);
	return 0;
}
