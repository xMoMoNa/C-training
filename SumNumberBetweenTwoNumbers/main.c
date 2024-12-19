#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numMin, numMax, temp, sum;
    printf("Enter max Number: "); scanf("%d", &numMax);
    printf("Enter min Number: "); scanf("%d", &numMin);
    if(numMin>numMax){
        temp=numMax;
        numMax=numMin;
        numMin=temp;
        printf("You wrong!\nmax number = %d\nmin number= %d\n",numMax,numMin);
    }
    for(int i = numMin+1;i<numMax;i++){
        sum+=i;
    }
    printf("Sum= %d",sum);
    return 0;
}
