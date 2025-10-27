#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void Count(char *c, int *letter, int *number, int *special) {
	char *current = c;
	*letter = 0;
	*number = 0;
	*special = 0;
	
	while (*current != '\0') {
		if (isalpha(*current)) {
			(*letter)++;
		}
		else if (isdigit(*current)) {
			(*number)++;
		}
		else {
			(*special)++;
		}
		current++;
	}
	
}

int main() {
	char c[1001];
	int letter, number, special;
	
	printf("Nhap vao mot chuoi : ");
	fgets(c, sizeof(c), stdin);
	c[strcspn(c, "\n")] = 0;
	
	Count(c, &letter, &number, &special);
	
	printf("Letters : %d\n", letter);
	printf("Numbers : %d\n", number);
	printf("Special : %d\n", special);
	
	return 0;
} 
