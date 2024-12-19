#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, flag=0, sum=0;
    printf("Enter a positive number: ");
    while(flag<2){
        scanf("%d",&n);
        if(n%2){
            flag=flag+1;
        }else{
            sum=sum+n;
            flag=0;
        }
        printf("The summation = %d\n",sum);
    }
    printf("Bye");
    return 0;
}
