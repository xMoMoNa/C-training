#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numMax, numMin, num, i;
    printf("How many numbers are inputs: ");
    scanf("%d",&i);
    printf("your number: %d\n",i);
    for(;i<0;)
    {
        printf("Wrong number\nplease try positive number: ");
        scanf("%d",&i);
        printf("your number: %d\n",i);
    }

    {
        scanf("%d",&num);
        numMax=num;
        numMin=num;
        for(; i>1; i--)
        {
            scanf("%d",&num);
            if(num>numMax) numMax=num;
            if(num<numMin) numMin=num;
        }
        printf("Max number= %d\n", numMax);
        printf("Min number= %d", numMin);
    }
    return 0;
}
