#include <stdio.h>
#include <stdlib.h>
int secoundLarge(int arr[], int size) {
    int i;
    int large = arr[0], secoundLarge, flag=1;
    for(i=1; i<size; i++) {
        if(arr[i]>large) {
            secoundLarge = large;
            large=arr[i];
        } else {
            if(flag) {
                secoundLarge=arr[i];
                flag=0;
            }
            if(arr[i]>secoundLarge) {
                secoundLarge=arr[i];
            }
        }
    }
    return secoundLarge;
}

int maxN(int arr[], int size, int n) {
    int i, j, flag ;
    int large = arr[0], temp = arr[0];
    for(i=0; i<size; i++)
        large= arr[i]>large? arr[i]:large;

    for(i=1; i<n; i++) {
        temp = large;
        flag=1;
        for(j=0; j<size; j++) {
            if(arr[j]<temp && flag) {
                large = arr[j];
                flag =0;
            }
            if(arr[j]>large && arr[j]<temp)
                large = arr[j];
        }
    }
    return large;
}


int main() {
    int arr[]= {500000,2000,1111,6,9,12,0,325,6, 0};
    int secound = secoundLarge(arr, sizeof(arr)/sizeof(arr[0]));
    printf("%d\n", secound);
    return 0;
}
