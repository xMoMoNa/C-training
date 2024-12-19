#include <stdio.h>
#include <stdlib.h>
char countOnes(unsigned int n) {
    char sum;
    while(n>0) {
        if(n&1) {
            sum++;
        }
        n>>=1;
    }
}
int main() {
    unsigned int n;
    while(1) {
        printf("Enter a positive number: ");
        scanf("%u",&n);
        printf("Number of one digits = %d\n",countOnes(n));
    }
    return 0;
}
