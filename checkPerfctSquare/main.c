#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i=0, flag=0;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i*i==n)
        {
            flag=1;
            break;
        }
        i=i+1;
    }
    if(flag)
    {
        printf("perfect square number");
    }
    else
    {
        printf("Not perfect square number");
    }
    return 0;
}
