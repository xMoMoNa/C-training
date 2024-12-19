#include <stdio.h>
#include <stdlib.h>

void swapChar(char* n1, char* n2) {
    int tmp=*n1;
    *n1=*n2;
    *n2=tmp;
}
void reverseString(char *arr){
int length=0, i=0, tmp;
while(arr[i++])
    length++;
for(i=0; i<length/2; i++){
    swapChar(&arr[length-i-1],&arr[i]);
}
}

int main()
{
    char arr[]= "Mohammed Mohsen Nassar";

    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; arr[i]; i++){
        printf("%c",arr[i]);
        if(arr[i]==0) printf("%d",0);
    }
    printf("\n");
    reverseString(arr);
    for(int i=0;i<22; i++){
        printf("%c",arr[i]);
        if(arr[i]==0) printf("%d",1);
    }
    return 0;
}
