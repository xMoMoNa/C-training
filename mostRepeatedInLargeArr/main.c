#include <stdio.h>
#include <stdlib.h>
int mostRepeatedInCharArr(int arr[], int size) {
    int max=0,i=0, maxNum;
    char freqArr[256]= {0};
    for(i=0; i<size; i++) {
        freqArr[arr[i]+128]++;
    }
    for(i=0; i<256; i++) {
        if(freqArr[i]>max) {
            max = freqArr[i];
            maxNum=i;
        }
    }
    return maxNum-128;

}
int main() {
    int max, arr[]= {
        -1,-1,-1,-1,-1,-1,0,3,3,4,4,5,6,6,
            7,7,8,9,9,10,0,11,11,
            12,12,12,13,10,13,14,14,14,14,14,15
        };
    int size=sizeof(arr)/sizeof(arr[0]);
    max=mostRepeatedInCharArr(arr, size);
    for(int i=0; i<size; i++) {
        printf("%d\n",arr[i]);
    }
    printf("\n\nrepeated number=%d\n",max);
    return 0;
}

