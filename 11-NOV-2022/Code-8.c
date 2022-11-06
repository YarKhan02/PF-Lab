#include <stdio.h>
#include <time.h>

int main(){
    int target, n, sum = 0;

    printf("Enter Number: ");
    scanf("%d", &target);
    printf("Enter lenght of an array: ");
    scanf("%d", &n);

    int arr[n];     

    for(int z = 0; z < n; z++){
        printf("\nElement %d: ", z + 1);
        scanf("%d", &arr[z]);
    }

    int i = 0, j = 0;

    while(i < n){
        j = i;
        while(j < n){
            sum += arr[j];
            if(sum == target){
                printf("The elements from position %d to %d when summed results in the output of %d", i + 1, j + 1, target);
                return;
            }
            j++;
        }
        sum = 0;
        j = 0;
        j++;
        i++;
    }
}