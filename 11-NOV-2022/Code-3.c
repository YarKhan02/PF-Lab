#include <stdio.h>
#include <time.h>

int main(){
    int t = time(NULL) * rand();
    srand(t);

    int arr[30], n;

    for(int i = 0; i < 30; i++){
        arr[i] = rand() % 100 + 1;
        printf("%d: %d\n", i + 1, arr[i]);
    }

    printf("\nEnter Student Number: ");
    scanf("%d", &n);
    
    if(arr[n - 1] >= 85){
        printf("Grade is A");
    }
    else if((arr[n - 1] < 85) && (arr[n - 1] >= 70)){
        printf("Grade is B");
    }
    else if((arr[n - 1] < 70) && (arr[n - 1] >= 50)){
        printf("Grade is C");
    }
    else{
        printf("You are Fail!");
    }
}