#include <stdio.h>
#include <stdlib.h>
void cpyStrWithoutRepeat(char str1[], char str2[]) {
    int freqArr[128]= {0};
    int i=0,j;
    for(j=0, i=0; str2[i]; i++) {
        freqArr[str2[i]]++;
        if(freqArr[str2[i]]==1) {
            str1[j++]=str2[i];
        }
    }
    str1[j]=0;
}
int main() {
    char str1[20]= "", str2[]="ahmed selem kamel";

    printf("string: \n");
    for(int i=0; str2[i]; i++) printf("%c",str2[i]);
    cpyStrWithoutRepeat(str1, str2);
    printf("\nstring without repeated characters:\n%s", str1);
    return 0;
}

