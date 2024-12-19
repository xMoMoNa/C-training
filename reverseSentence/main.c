#include <stdio.h>
#include <stdlib.h>

#define METHOD 2
#if METHOD==1
void reverseWord(char text[], int first, int last) {
    char temp;
    while(last>first ) {
        temp = text[last];
        text[last] = text[first];
        text[first] = temp;
        first++;
        last--;
    }
}
int stringLength(char s[]) {
    int i=0;
    while(s[i]) {
        i++;
    }
    return i;
}
int findWord(char text[], int last) {

    while(text[last] != ' ' && text[last] != 0) {
        last++;
    }
    return last;

}

void reverseSentece(char text[]) {
    int size = stringLength(text);
    int first=0;
    int last=0;
    int word=1;
    int i=0;

    reverseWord(text, 0, size-1);

    while(text[i] !=0) {
        if(text[i++]==' ') {
            word++;
        }
    }

    last=findWord(text, last);
    while(word--) {
        reverseWord(text, first, last-1);
        first = (++last);
        last=findWord(text, last);
    }

}

int main() {
    char text[] = "my name is mohammed mohsen nassar and have 30 years";
    printf ("%s\n", text);
    reverseSentece(text);
    printf ("%s", text);

    return 0;
}
#elif METHOD==2
void swapChar(char* n1, char* n2) {
    int tmp=*n1;
    *n1=*n2;
    *n2=tmp;
}
void reverseString(char *str) {
    int length=0, i=0;
    length=strLen(str);
    for(i=0; i<length/2; i++)
        swapChar(&str[length-i-1],&str[i]);

    return;
}

void reverseStringCustom(char *str, int f, int l) {
    int i,j;
    for(i=f,j=l-1; i<j; i++,j--) {
        swapChar(&str[i],&str[j]);
    }
}
int strLen(char* str) {
    int len=0;
    while(str[len]) len++;
    return len;
}
void reverseWord(char str[]) {
    int f=0,l=0;
    reverseString(str);
    while(str[l]) {
        if(str[l]==' ') {
            reverseStringCustom(str, f, l);
            l++;
            f=l;
        } else {
            l++;
        }
    }
    reverseStringCustom(str, f, l);
}

int main() {
    char arr[]= "my name is mohammed mohsen nassar and have 30 years";
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; arr[i]; i++) {
        printf("%c",arr[i]);
        if(arr[i]==0) printf("%d",0);
    }
    printf("\n");
    reverseWord(arr);
    for(int i=0; arr[i]; i++) {
        printf("%c",arr[i]);
        if(arr[i]==0) printf("%d",0);
    }
    return 0;
}
#endif
