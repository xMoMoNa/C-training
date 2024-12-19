#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    while(n%2==0){
        n=n/2;
    }
    if(n==1){
        printf("The number is a base of 2");
    }else{
        printf("The number is not a base of 2");
    }
    return 0;
}
