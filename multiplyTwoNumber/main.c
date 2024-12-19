#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, sum, sign, i;
    while(1){
    sum=0;
    sign=0;
    i=0;
    printf("Enter Two number: ");
    scanf("%d%d",&n1,&n2);
    if(n1<0&&n2>0||n1>0&&n2<0){
        if(n1<0) n1=-n1;
        if (n2<0) n2=-n2;
        sign=1;
    }else{
        if(n1<0) n1=-n1;
        if (n2<0) n2=-n2;
    }
    //first method
    /*
    for(;n1>0;n1--){
        sum=sum+n2;
    }*/

    //second method
    while(n1>0){
        if(n1&1){
            sum=sum+(n2<<i);
        }
        n1=n1>>1;
        i=i+1;
    }

    if(sign){
        sum= -sum;
    }
    printf("%d\n",sum);
    }
    return 0;
}
