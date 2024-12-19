#include <stdio.h>
#include <stdlib.h>
void searchMinAndMax(int arr[], int size, int* min, int* minIndex, int* max, int* maxIndex){
    int i;
    *min = arr[0];
    *max= arr[0];
    *maxIndex=0;
    *minIndex=0;
    for(i=0; i<size; i++){
        if(arr[i]>=*max){
            *max=arr[i];
            *maxIndex=i;
        }
        if(arr[i]<=*min){
            *min=arr[i];
            *minIndex=i;
        }
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,1,2,5,2,3,1,8,6,3,4,7,2,9,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int minNumbe, minIndex, maxNumber, maxIndex;
    searchMinAndMax(arr, size, &minNumbe, &minIndex, &maxNumber, &maxIndex);
    printf("min number = %d\tmin index = %d\nmax number = %d\tmax index = %d\n",
           minNumbe, minIndex, maxNumber, maxIndex);
    return 0;
}
