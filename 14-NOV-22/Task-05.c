#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int power(long long n, long long r){
	long long p = 1;
	int m = 1000000007;

	while(r > 0){
		if((r & 1) != 0){
			p = (p*(n%m))%m;
		}
		n = ((n % m)*(n % m)) % m;
		r = r >> 1;
	}
	return p;
}

int main() {
	int n, r;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Enter reverse of a number: ");
	scanf("%d", &r);
	
	long long p = power(n, r);
	
	printf("%ld", p);
}
