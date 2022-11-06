#include <stdio.h>
#include <time.h>

int main(){
    int t = time(NULL) * rand();
    srand(t);

    int n;

    printf("Enter size of an array: ");
    scanf("%d", &n);

    int arr[n], sum = 0, avg;

    for(int i = 0; i < n; i++){
        arr[i] = rand() % 100 + 1;
        sum += arr[i];
    }

    avg = sum / n;

    printf("\nSum of elements: %d", sum);
    printf("\nAverage of elements: %d", avg);
}