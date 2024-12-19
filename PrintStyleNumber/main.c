#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long n;
    int sum=0;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    if(n==0)
    {
        sum++;
    }
    while(n>0)
    {
        if(n%10==0 || n%10==4 || n%10==6 || n%10==9)
        {
            sum++;
        }
        else if(n%10==8)
        {
            sum=sum+2;
        }
        n=n/10;
    }
    printf("The total hole = %d", sum);
    return 0;
}
