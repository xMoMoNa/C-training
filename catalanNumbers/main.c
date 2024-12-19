#include <stdio.h>
#include <stdlib.h>

long long* catalanNumbers(char n)
{
    char f=0;
    unsigned long long*numbers= (unsigned long long*) malloc(n*sizeof(int));
    numbers[0]=1;
    numbers[1]=1;
    if(n==1) {
        return numbers;
    }
    for(int i=2; i<n; i++){
        numbers[i]=0;
        for(f=0; f<i; f++){
            numbers[i]= numbers[i]+(numbers[f]*numbers[i-f-1]);
        }
    }
    return numbers;
}

int main()
{
    unsigned long long *result;
    int n;
    while(1)
    {
        printf("Enter Number (lower than 36) to create an array of catalan numbers: ");
        scanf("%d", &n);
        result=catalanNumbers((char)n);
        for(int i=0; i<n; i++)
        {
            printf("Number %2d: %lld\n", (int) i, result[i]);
        }
    }
    return 0;
}
