#include <stdio.h>
#include <stdlib.h>
void swapArray(int arr1[], int size1, int arr2[], int size2){
    int tmp;
    int size;
    size= size1 < size2? size1 : size2;
    for(int i=0; i<size; i++){
        tmp=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=tmp;
    }
}
int main()
{
    int i;
    int arr1[]={1,2,3,4,5,6,7,8,9,10,1,2,5,2,3,1,8,6,3,4,7,2,9,6};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={16,23,-2,0,2,1,56,-254,96,32,1254,6,-52,-9};
    int size2 = sizeof(arr2)/sizeof(arr1[0]);
    swapArray(arr1, size1, arr2, size2);
    for(i=0; i<size1; i++){
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for(i=0; i<size2; i++){
        printf("%d ", arr2[i]);
    }
    return 0;
}
