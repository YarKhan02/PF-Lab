#include <stdio.h>
#include <time.h>

int main(){
    int t = time(NULL) * rand();
    srand(t);

    int arr[30], n;

    for(int i = 0; i < 30; i++){
        arr[i] = rand() % 100 + 1;
        printf("%d: %d\n", i + +1, arr[i]);
    }

    printf("\nEnter Student Number: ");
    scanf("%d", &n);
    printf("Students %d test marks is %d", n, arr[n - 1]);
}