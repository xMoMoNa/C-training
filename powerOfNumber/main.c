#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, result=1;
    printf("Enter a number and its positive power: ");
    scanf("%d%d",&n1,&n2);
    while(n2>0){
        result=result*n1;
        n2=n2-1;
    }
    printf("The result = %d",result);
    return 0;
}
