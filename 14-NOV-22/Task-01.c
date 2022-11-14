#include <stdio.h>
#include <stdlib.h>

int factorial(int n){
	if(n < 2){
		return n;
	}
	
	return n*(factorial(n - 1));
}

int main() {
	int n;
	
	printf("Enter a number for its factorial: ");
	scanf("%d", &n);
	
	int fact = factorial(n);
	
	printf("\n%d", fact);
}
