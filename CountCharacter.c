#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void Count(char *c) {
	int *count = calloc(256, sizeof(int)); 
	int *follow = calloc(256, sizeof(int));
	
	int length = strlen(c);
	for (int i = 0; i < length; i++) {
		count[c[i]]++;
	}
	
	for (int i = 'A'; i <= 'Z'; i++) {
		if (count[i] > 0) {
			printf("%c %d\n", i, count[i]);
		}
	}
	
	for (int i = 'a'; i <= 'z'; i++) {
		if (count[i] > 0){
			printf("%c %d\n", i, count[i]);
		}
	}
	
	printf("\n");
	
	for (int i = 0; i < length; i++) {
    	int tmp = c[i];
        if (count[tmp] > 0 && !follow[tmp]) {
            printf("%c %d\n", tmp, count[tmp]);
            follow[tmp] = 1;
        }
    }
    free(count);
    free(follow);
}

int main() {
	char *c;
	int size = 1001;
	c = calloc(1001, sizeof(char));
	
	printf("Enter an string : ");
	fgets(c, sizeof(c), stdin);
	c[strcspn(c, "\n")] = 0;
	
	Count(c);
	
	free(c);
	return 0;
} 
