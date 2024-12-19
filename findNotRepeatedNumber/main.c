#include <stdio.h>
#include <stdlib.h>

int findNotRepeated(int arr[],int size) {
    int i=0, notRepeated=0, sum=0;
    for(i=0; i<size; i++) {
        sum=sum^arr[i];
    }
    notRepeated=sum;
    return notRepeated;
}

int main()
{
    int arr[10]= {1,1,2,4,6,2,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("not repeated number= %d",findNotRepeated(arr,size));
    return 0;
}
