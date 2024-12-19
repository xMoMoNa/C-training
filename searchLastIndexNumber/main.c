#include <stdio.h>
#include <stdlib.h>
int searchLasatIndex(int arr[], int size, int number){
    int index=-1, i;
    for(i=0;i<size;i++){
        if(arr[i]==number){
            index=i;
        }
    }
    return index;
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,1,2,5,2,3,1,8,6,3,4,7,2,9,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int index, number;
    while(1){
    printf("Enter number: ");
    scanf("%d", &number);
    index = searchLasatIndex(arr, size, number);
    printf("%d\n", index);
    }
    return 0;
}
