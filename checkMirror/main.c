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
int strLen(char* str){
int len=0;
while(str[len]) len++;
    return len;
}
char checkMirror(char str[]){
char flag=1;
int len=strLen(str), i=0;
for(i=0; i<len/2; i++){
    if(str[len-i-1]!=str[i]){
    flag=0;
    break;
    }
}
return flag;
}
int main()
{
    char arr[]= "aataaz",check;

    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; arr[i]; i++){
        printf("%c",arr[i]);
        if(arr[i]==0) printf("%d",0);
    }
    printf("\n");
    check=checkMirror(arr);
    printf("%d",check);

    return 0;
}
