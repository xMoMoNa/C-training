#include <stdio.h>
#include <stdlib.h>
void reverseArray(int arr[], int size){
    int i, tmp;
    for(i=0; i < size/2; i++){
        tmp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=tmp;
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,1,2,5,2,3,1,8,6,3,4,7,2,9,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr, size);
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
