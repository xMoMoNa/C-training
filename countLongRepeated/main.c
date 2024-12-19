#include <stdio.h>
#include <stdlib.h>
int countLongRepeated(int arr[], int size, int* num){
    int c=0, max=0, i=0;
    *num=arr[0];
    for(i=0; i<size; i++){
        if(arr[i]==arr[i+1]&&i<size-1){
            c++;
        }else if(arr[i]==arr[i-1]&&i==size-1){
            c++;
        }
        else{
            c=0;
        }

        if(c>max){
            max=c;
            *num=arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[]={1,3,2,5,6,6,6,8,5,4,5,5,5,2,0,0,0,0,3,0,0,0,6,3,9,9,9,2,2,2,2,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int num, c;
    c=countLongRepeated(arr, size, &num);
    printf("Repeated: %d\tthe number: %d", c, num);
    return 0;
}
