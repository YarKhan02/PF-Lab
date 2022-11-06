#include <stdio.h>
#include <time.h>

int main(){
    int t = time(NULL) * rand();
    srand(t);

    int sales[4][5];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            sales[i][j] = rand() % 100 + 1;
        }
    }

    int totalSales;
    int sales_person;
    int product;

    printf("Enter the salesPerson number (1-4): ");
    scanf("%d", &sales_person);

    while (sales_person != -1){
    
        printf("ProductNumber: ");      
        scanf("%d", &product);
        printf("Number of Product Units Sold: ");
        printf("%d", sales[product - 1][sales_person - 1]);

        printf("\nEnter the salesPerson number 1-4): ");
        scanf("%d", &sales_person);
    }
                
    for(int i = 0; i < 4; i++){
        totalSales = 0;
        printf("\n\nSale person: %d", i + 1);
        for (int j = 0; j < 5; j++){
            totalSales += sales[i][j];
        }
        printf("\nTotal Sales = %d", totalSales);
    }    
}