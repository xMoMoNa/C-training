#include <stdio.h>
#include <stdlib.h>
void shiftArr(int arr[], int size,
              int times, char dir) {
    int temp;
    if(dir==1) {
        while(times--) {
            temp=arr[0];
            for(int i=0; i<size-1; i++) {
                arr[i]=arr[i+1];
            }
            arr[size-1]=temp;
        }
    } else if(dir==0) {
        while(times--) {
            temp=arr[size-1];
            for(int i=size-1; i>=0; i--) {
                arr[i]=arr[i-1];
            }
            arr[0]=temp;
        }
    }
}
int removeRepeated(int arr[], int size) {
    int first=0,count=0;
    while(first+count<size-1) {
        if(arr[first]==arr[first+1]) {
            shiftArr(arr+first,size-first,
                     1,1);
            count++;
            continue;
        }
        first++;
    }
    return size-count;
}
int main() {
    int arr[]= {
        1,1,1,1,2,3,3,4,4,5,6,6,
        7,7,8,9,9,10,10,11,11,
        12,12,12,13,13,13,14,14,14,15
    };
    int size=sizeof(arr)/sizeof(arr[0]);
    size=removeRepeated(arr, size);
    for(int i=0; i<size; i++) {
        printf("%d\n",arr[i]);
    }
    return 0;
}

