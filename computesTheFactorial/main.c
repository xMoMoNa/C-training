#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    printf("Enter a positive number to compute factorial: ");
    scanf("%d", &n);
    i=n/2;
    while(i>1){
        if(!(n%i)){
            printf("%d ",i);
        }
        i=i-1;
    }
    return 0;
}
