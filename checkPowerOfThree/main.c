#include <stdio.h>
#include <stdlib.h>

int checkPowerOfThree(int n){
    int check=0;
    while( (n%3) == 0 && n>3){
        n /= 3;
    }
    if(n==3) check = 1;
    return check;
}

int main()
{
    int n;
    while(1){
        printf(">> enter number: "); scanf("%d", &n);
        printf("%d\n", checkPowerOfThree(n));
    }
    return 0;
}
