#include <stdio.h>
#include <stdlib.h>
void generatePrime(int numbersOfPrime) {
    if(numbersOfPrime < 1) return;
    int lastPrime=2, x=2, primeFlag, temp= numbersOfPrime;
    printf("%d) 2\n", temp-numbersOfPrime+1);
    numbersOfPrime--;
    while(numbersOfPrime) {
        primeFlag = 1;
        for(int i= lastPrime ; i>1; i--) {
            if(!(x%i)) {
                primeFlag=0;
                break;
            }
        }
        if(primeFlag) {
            lastPrime=x;
            printf("%d) %d\n",temp-numbersOfPrime+1, lastPrime);
            numbersOfPrime--;
        }
        x++;
    }
}
int main() {
    int n;
    while(1) {
        printf("Enter number of generated primes: ");
        scanf("%d", &n);
        generatePrime(n);
    }
    return 0;
}
