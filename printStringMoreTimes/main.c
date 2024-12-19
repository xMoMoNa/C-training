#include <stdio.h>
#include <stdlib.h>

int str2int(char str[],int start, int end) {
    int num=0;
    while(start<=end) {
        num=num*10+str[start]-'0';
        start++;
    }
    return num;
}

void printStr(char str[],int start, int end) {
    for(; start<end; start++) {
        printf("%c",str[start]);
    }

}
void repeatWord(char str[]) {
    int n, start=0, comma=0, end=0;
    while(str[end]!=0) {
        while(str[end]!=',') {
            end++;
            comma++;
        }
        end++;
        while(str[end]!=','&&str[end]!=0) {
            end++;
        }
        n=str2int(str,comma+1,end-1);
        while(n--) {
            printStr(str,start,comma);
            printf("\n");
        }
        end++;
        start=end;
        comma=end;

    }
}

int main() {
    char str[]="hi,5,hello,17,kj,8";
    for(int i=0; str[i]; i++) {
        printf("%c",str[i]);
    }
    printf("\n");
    repeatWord(str);
    return 0;
}
