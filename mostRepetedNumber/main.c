#include <stdio.h>
#include <stdlib.h>
void mostRepeatedNumber(int arr[], int size, int* number, int* repeated){
    int c, i, j;
    *repeated=0;
    for(int i=0; i<size; i++){
        c=0;
        for(int j=0; j<size; j++){
            if(arr[i]==arr[j]) c++;
        }
        if(c>*repeated){
            *repeated=c;
            *number=arr[i];
        }
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,1,2,5,2,3,1,8,6,3,4,7,2,9,6,6,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int number, repeated;
    mostRepeatedNumber(arr, size, &number, &repeated);
    printf("number = %d  repeated = %d\n", number, repeated);
    return 0;
}
