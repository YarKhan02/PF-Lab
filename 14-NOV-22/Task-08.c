#include <stdio.h>
#include <stdlib.h>

int a[10];

void toh(int number, char start, char aux, char end){
    if(number == 1){
        printf("\n%c %c", start, end);
    }
    else{
        toh(number - 1, start, end, aux);
        toh(1, start, aux, end);
        toh(number - 1, aux, start, end);
    }
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    toh(3, '1', '2', '3');
}