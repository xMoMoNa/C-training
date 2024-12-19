#include <stdio.h>
#include <stdlib.h>
void printMatrix(int* arr, int staticCol, int row, int col) {
    int i,j;
    for(i=0; i<row; i++) {
        for(j=0; j<col; j++) {
            printf("%2d ", arr[i*staticCol+j]);
        }
        printf("\n");
    }
}
void printMatrixZigZag(int* arr, int staticCol, int row, int col) {
    int i,j;
    for(i=0; i<row; i++) {
        for(j=0; j<col; j++ ) {

            printf("%d ", arr[i*staticCol+(i%2?col-j-1:j)]);

        }
    }
    printf("\n");
}
void printDiagonal(int* arr, int staticCol, int row, int col) {
    int i;
    if(row!=col){
        printf("it is not square matrix!!\n");
        return;
    }
    for(i=0; i<col; i++ ) {
        printf("%d ", arr[i*staticCol+i]);
    }
    printf("\n");
    for(i=0; i<col; i++ ) {
        printf("%d ", arr[i*staticCol+(col-i-1)]);
    }
    printf("\n");
}
int main() {
    int arr[][10]= {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    printf("print matrix\n");
    printMatrix(arr, 10, 4,4);
    printf("\n");
    printf("print zigzag\n");
    printMatrixZigZag(arr, 10, 4,4);
    printf("\n");
    printf("print diagonal\n");
    printDiagonal(arr, 10, 4,4);
    return 0;
}
