#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i, flag=0;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    i=n/2;
    while(i>1){
        if((n%i)==0){
            flag=1;
            printf("%d\n",i);
            break;
        }
        i=i-1;
    }
    if(flag){
        printf("Not prime number");
    }else{
        printf("Prime number");
    }
    return 0;
}
