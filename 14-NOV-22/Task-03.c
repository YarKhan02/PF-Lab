#include <stdio.h>
#include <stdlib.h>

void swap(int a, int b){
	int temp;
	
	temp = a;
	a = b;
	b = a;
	
	printf("\n\nAftere swapping");
	
	printf("\n\na = %d", a);
	printf("\nb = %b", b);
}

int main() {
	int a = 4, b = 3;
	
	printf("Before swapping");
	
	printf("\n\na = %d", a);
	printf("\nb = %d", b);
	
	swap(a, b);
}
