#include <stdio.h>
#include <stdlib.h>
int biggestDiffrence(int arr[], int size) {
    int maxDiffrence=0,i=0,j=0;
    for(; i<size; i++) {
        for(j=i; j<size; j++) {
            if(
                (arr[i]<arr[j])&&
                (arr[j]-arr[i]>maxDiffrence)
            ) {
                maxDiffrence=arr[j]-arr[i];

            }
        }
    }

    return maxDiffrence;
}
int main() {
    int max;
    int arr[]= {0,3,3,4,4,5,6,6,7,7,8,9,9,10,0,11,11,12,12,12,13,10,13,14,14,14,15};
    int size;
    size=sizeof(arr)/sizeof(arr[0]);
    max=biggestDiffrence(arr, size);
    printf("max diffrence=%d\n",max);
    return 0;
}

