#include <stdio.h>
#include <stdlib.h>
void swap(int* n1, int* n2) {
    int tmp=*n1;
    *n1=*n2;
    *n2=tmp;
}
void swapAfterZeros(int arr[]) {
    int i=0,j,flag=2, index[2]= {0};
    while(flag) {
        if(arr[i]==0) {
            flag--;
            index[flag]=i;
        }
        i++;
    }
    i=index[0]+1;
    j=index[1]+1;
    for(; i<index[0]+4;) {
        swap(&arr[i],&arr[j]);
        i++;
        j++;
    }
}

int main() {
    int arr[]= {
        1,1,1,1,0,3,4,5,7,7,8,9,9,10,0,11,11,12,12,12,13,10,13
    };
    int size=sizeof(arr)/sizeof(arr[0]);
    swapAfterZeros(arr);
    for(int i=0; i<size; i++) {
        printf("%d\n",arr[i]);
    }

    return 0;
}
