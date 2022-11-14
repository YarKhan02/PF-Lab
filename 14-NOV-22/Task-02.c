#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void replace(){
	char c;
	char p;
	char s[10];
	int i;
	
	printf("Enter a string: ");
	scanf("%s", s);
	printf("\nEnter a character to be replaced: ");
	scanf(" %c", &c);
	printf("\nEnter replacement character: ");
	scanf(" %c", &p);
	
	int len = strlen(s);
	
	for(i = 0; i < 5; i++){
		if(s[i] == c){
			s[i] = p;
		}
	}
	
	printf("\nOutput: %s", s);
}

int main() {
	replace();
}
