#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long int n;
    int sum=0;
    printf("Enter a positive number: ");
    scanf("%llu",&n);
    while(n>=1){
        sum=sum+n%10;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}
