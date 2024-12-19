#include <stdio.h>
#include <stdlib.h>
unsigned int reverseNumber(unsigned int n){
    unsigned int sum=0;
    while(n>0){
        sum=sum*10+(n%10);
        n/=10;
    }
    return sum;
}
int main()
{
    unsigned int n;
    while(1){
    printf("Enter a positive integer number: ");
    scanf("%u",&n);
    printf("Reversed number: %u\n",reverseNumber(n));
    }
    return 0;
}
