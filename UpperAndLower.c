#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void Uppercase(char *c) {
	char *current = c;
	while (*current != '\0'){
		putchar(toupper(*current));
		current++;
	}
	putchar('\n');
	
} 

void Lowercase(char *c) {
	char *current = c;
	while (*current != '\0') {
		putchar(tolower(*current));
		current++;
	}
	putchar('\n');
}


int main() {
	char c[1001];
	printf("Enter an string : ");
	fgets(c, sizeof(c), stdin);
	c[strcspn(c, "\n")] = 0;
	
	Uppercase(c);
	Lowercase(c);
	
	return 0;
} 
