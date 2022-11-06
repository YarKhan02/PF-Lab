#include <stdio.h>
#include <time.h>

int main(){
    int n, economy = 0, first = 0;
    int *seats = (int*)calloc(10, sizeof(int));
    int x = 1, s = 0, y;
    
    while(s < 10){
        printf("\nPress 1 for first class\nPress 2 for economy class\nPress: ");
        scanf("%d", &n);

        first_class:
            if((n == 1) || (y == 1)){
                if(first < 5){
                    first++;
                    seats[s] = x;
                    printf("\nBoarding Pass of person %d\nFirst Class\nSeat Number: %d\n", x, s + 1);
                    x++;
                    s++;
                }
                else{
                    printf("\nFirst class is full");
                    printf("\nWould you like to travel in economy class?");
                    printf("\n2Press 1 for YES or Press 0 for NO\nPress: ");
                    scanf("%d", &y);
                    if(y == 1){
                        goto economy_class;
                    }
                }
            }
            
        economy_class:
            if((n == 2) || (y == 1)){
                if(economy < 5){
                    economy++;
                    seats[s] = x;
                    printf("\nBoarding Pass of person %d\nEconomy Class\nSeat Number: %d\n", x, s + 1);
                    x++;
                    s++;
                }
                else{
                    printf("\nFirst class is full");
                    printf("Would you like to travel in economy class?");
                    printf("Press 1 for YES or Press 0 for NO\nPress: ");
                    scanf("%d", &y);
                    if(y == 1){
                        goto first_class;
                    }
                }
            }
    }
}