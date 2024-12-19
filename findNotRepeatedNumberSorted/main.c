#include <stdio.h>
#include <stdlib.h>
int findNotRepeatedSorted(int arr[],int size) {
    int first=0, last=size-1;
    int middle;
    while(first<=last) {
        middle=(first+last)/2;
        if(middle%2==0) {
            if(arr[middle]==arr[middle+1]) {
                first=middle+1;
            } else {
                if(arr[middle]==arr[middle-1]) {
                    last=middle-1;
                } else {
                    return arr[middle];
                }
            }
        } else {
            if(arr[middle]==arr[middle-1]) {
                first=middle+1;
            } else {
                if(arr[middle]==arr[middle+1]) {
                    last=middle-1;
                } else {
                    return arr[middle];
                }
            }
        }

    }
    return -1;

}

int main() {
#define CHOOSE 2
#if CHOOSE==1
    int arr[]= {0,1,1,2,2,4,4,10,10,60,60,70,70,81,81};
#elif CHOOSE==2
    int arr[]= {1,1,2,2,4,4,10,10,60,60,70,70,81,81,100};
#elif CHOOSE==3
    int arr[]= {1,1,2,2,4,4,10,10,60,60,65,70,70,81,81};
#else
    int arr[]= {1,1,2,2,4,4,10,10,60,60,70,70,81,81};
#endif
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size; i++) printf("%d ",arr[i]);
    printf("\nnot repeated number= %d",
           findNotRepeatedSorted(arr,size));
    return 0;
}

