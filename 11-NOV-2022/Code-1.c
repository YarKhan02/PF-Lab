#include <stdio.h>
#include <time.h>

void display_matrix(int display[][3], int r, int c){
    printf("\nTranspose Matrix\n\n");
    
    for(int x = 0; x < r; x++){
        for(int y = 0; y < c; y++){
            printf("%d ", display[x][y]);
        }
        printf("\n");
    }
}

void transpose_matrix(int matrix[][3], int r, int c){
    int transpose[r][c];

    for(int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            transpose[j][i] = matrix[i][j];
        }
    }

    display_matrix(transpose, r, c);

}

void input_matrix(){
    int t = time(NULL) * rand();
    srand(t);

    int r, c;

    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &r, &c);

    int matrix[r][c];

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            matrix[i][j] = rand() % 100 + 1;
        }
    }

    printf("Inpurt Matrix\n\n");

    for(int x = 0; x < r; x++){
        for(int y = 0; y < c; y++){
            printf("%d ", matrix[x][y]);
        }
        printf("\n");
    }

    transpose_matrix(matrix, r, c);
}

int main(){
    input_matrix();
}