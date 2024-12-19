#include <stdio.h>
#include <stdlib.h>
float area(float r){
    return 3.1416*r*r;
}
float circumference (float r){
    return 3.1416*2*r;
}
int main()
{
    float r;
    while(1){
    printf("Enter radius of circle: "); scanf("%f",&r);
    printf("Area = %0.2f unit square\ncircumference = %0.2f unit\n",area(r),circumference(r));
    }
}
