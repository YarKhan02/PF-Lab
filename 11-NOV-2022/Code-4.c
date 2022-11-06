#include <stdio.h>
#include <time.h>

int main(){
    int t = time(NULL) * rand();
    srand(t);

    int x, n;

    printf("Enter size of an array: ");
    scanf("%d", &x);

    n = x - 1;

    int arr1[x], arr2[x];

    printf("Original Array: ");

    for(int i = 0; i < x; i++){
        arr1[i] = rand() % 100 + 1;
        arr2[n] = arr1[i];
        printf("%d ", arr1[i]); 
        n--;
    }

    printf("\nAfter Revesing: ");

    for(int j = 0; j < x; j++){
        printf("%d ", arr2[j]); 
    }
}