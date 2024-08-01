#include <stdio.h>

void transpose_mat(int rows, int cols, int mat[rows][cols], int transpose[cols][rows]){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            transpose[j][i] = mat[i][j];   
        }
    }
}

int main()
{
    int rows, cols;
    printf("enter rows: ");
    scanf("%d", &rows);
    printf("enter columns: ");
    scanf("%d", &cols);
    
    int mat[rows][cols];
    int transpose[cols][rows];
    
    printf("enter the elements of matrix: ");
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    
    transpose_mat(rows, cols, mat, transpose);
    printf("original matrix: ");
    printf("\n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
    
    printf("transpose matrix: ");
    printf("\n");
    for(int i=0; i<cols; i++){
        for(int j=0; j<rows; j++){
            printf("%d", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
