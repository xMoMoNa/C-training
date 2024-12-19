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
int findMissed(int arr[],int size) {
    int missed, i=0, sum=0;
    for(; i<size; i++) {
        sum=sum+arr[i];
    }
    missed=seriesSum(0,size)-sum;
    return missed;
}

int main()
{
#define MISSEDNUMBER 6
    int arr[100],x;
    for(int i=0; i<100; i++) arr[i]=i;
    arr[MISSEDNUMBER]=100;
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("missed number= %d",findMissed(arr,size));
    return 0;
}
