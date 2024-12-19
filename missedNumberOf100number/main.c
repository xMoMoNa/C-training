#include <stdio.h>
#include <stdlib.h>
int seriesSum(int start, int end) {
    int sum=0, step=1;
    int element=(end-start+1)/step;
    if(element%2)
        sum=(start+end)*(element-1)/2+(start+end)/2;
    else
        sum=(start+end)*element/2;

    return sum;
}
int findRepeated(int arr[],int size) {
    int repeat, i=0, sum=0;
    for(int i=0; i<size; i++) {
        sum=sum+arr[i];
    }
    repeat=sum-seriesSum(1,100);
    return repeat;
}

int main() {
#define REPEATEDNUMBER 8
    int arr[101],x;
    for(int i=0; i<101; i++) arr[i]=i+1;
    arr[100]=REPEATEDNUMBER;
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("repeated number= %d",findRepeated(arr,size));
    return 0;
}
