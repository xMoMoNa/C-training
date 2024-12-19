#include <stdio.h>
#include <stdlib.h>
void printBinary(int n) {
    int i=31, flag=0;
    while(i>=0) {
        if(n==0){
            printf("0");
            break;
        }
        if((n>>i)&1) {
            flag = 1;
        }
        if(flag) {
            printf("%d",(n>>i)&1);
        }
        i=i-1;
    }
}

int main() {
    int n;
    while(1) {
        printf("Enter number: ");
        scanf("%d", &n);
        printBinary(n);
        printf("\n");
    }
    return 0;
}
