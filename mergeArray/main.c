#include <stdio.h>
#include <stdlib.h>
int* mergeArray(int arr1[], int size1, int arr2[], int size2){
    int i;
    int* arr=(int*) malloc((size1+size2) * sizeof(int));
    for(i=0; i<2*size1 && i<2*size2; i+=2){
        arr[i]=arr1[i/2];
        arr[i+1]=arr2[i/2];
    }
    if(i<2*size1){
        for(;i<(size1+size2);i++){
            arr[i]=arr1[i-size2];
        }
    } else if(i<2*size2){
        for(;i<size2+size1;i++){
            arr[i]=arr2[i-size1];
        }
    }
    return arr;
}
int main()
{
    int arr1[]={1,2,3,4,5,6,8};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={10,20,30,40,50,60,70,80,90};
    int size2= sizeof(arr2)/sizeof(arr2[0]);
    int *arr= mergeArray(arr1, size1, arr2, size2);
    for(int i=0; i<size1+size2; i++){
        printf("%d  ", arr[i]);
    }
    return 0;
}
