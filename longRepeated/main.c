#include <stdio.h>
#include <stdlib.h>
int longRepeated(int arr[], int size, int num){
    int max=-1, count=0, i;
    for(i=0; i<size; i++){
        if(arr[i]==num){
            count++;
        }
        else {
            if(count > max) {
                max = count;
            }
            count = 0;
        }
    }
    return max;
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,1,2,5,5,5,5,5,5,5,2,3,1,8,9,9,9,9,3,2,5,5,5,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int x = longRepeated(arr, size, 5);
    printf("%d\n",x);
    return 0;
}
