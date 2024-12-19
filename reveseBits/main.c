#include <stdio.h>
#include <stdlib.h>
char reverseBits(char n){
    char x=0, i=7;
    while( i>=0 ){
        x=x|((n&1)<<i);
        n>>=1;
        i--;
    }
    return x;
}
int main()
{
    int n;
    while(1){
    printf("Enter a number from (-128:127): ");
    scanf("%d", &n);
    printf(">>> %d\n", reverseBits(n));
    }
    return 0;
}
