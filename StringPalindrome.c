#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int StringPalindrome(char *c, int length) {
	char *left = c;
	char *right = c + length - 1;
	
	while (left < right) {
		if (*left != *right) {
			return 0;
		}
		left++;
		right--;
	}
	return 1;
}

int main() {
	char c[1001];
	
	printf("Nhap vao mot chuoi : ");
	fgets(c, sizeof(c), stdin);
	c[strcspn(c, "\n")] = 0;
	
	int length = strlen(c);
	if (StringPalindrome(c, length)) {
		printf("YES");
	}
	else printf("NO");
	
	return 0;
} 
