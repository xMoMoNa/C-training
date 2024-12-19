#include <stdio.h>
#include <stdlib.h>

int* arrPreviousNumber(int arr1[], int size1, int num, int* size2) {
    int index=-1;
    for(int i=0; i<size1;  i++) {
        if(arr1[i]==num) {
            index=i;
            break;
        }
    }
    if(index!=-1) {
        int*arr2=(int*)malloc(index*sizeof(int));
        *size2=index;
        for(int i=0; i<*size2; i++) {
            arr2[i]=arr1[i];
        }
        return arr2;
    } else {
        return 0;
    }

}
int main() {
    int arr1[]= {1,2,3,3,4,4,5,6,6}, size1, size2;
    size1=sizeof(arr1)/sizeof(arr1[0]);
    printf("given array:\n");
    for(int i=0; i<size1; i++) printf("%d,",arr1[i]);
    printf("\nnew array:\n");
    int *arr2=arrPreviousNumber(arr1, size1, 5, &size2);
    for(int i=0; i<size2; i++) printf("%d,",arr2[i]);
    return 0;
}
