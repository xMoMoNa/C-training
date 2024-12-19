#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    printf("Enter two positive number: ");
    scanf("%d%d",&n1,&n2);
    while(n1>=n2){
        n1=n1-n2;
    }
    printf("%d",n1);
    return 0;
}
