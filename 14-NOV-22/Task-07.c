#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int palindrome(int *p, int n, int r){
    int i = 0;
    while(i < n){
        if(*(p + i) == *(p + n)){
            i++;
            n--;
        }
        else{
            return;
        }
        if(i == n){
            printf("%d R", r);
        }
    }
} 

int main(){
    int t = time(NULL) * rand();
    srand(t);

    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    int arr[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = rand() % 2 + 0;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for(int k = 0; k < n; k++){
        count += k;
        palindrome(&arr[k], n - 1, count);
    }
}