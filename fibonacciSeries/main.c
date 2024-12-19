#include <stdio.h>
#include <stdlib.h>
int fibonacciNumber(int n){
    int num1, num2;
    num1=0;
    num2=1;
    while(n--) {
        num2 = num1+num2;
        num1 = num2-num1;
    }
    return num2;
}
int main() {
    int n, num, sum=0;
    while(1){
    printf("Enter number: ");
    scanf("%d", &n);
    while(n--) {
        num=fibonacciNumber(n);
        sum+=num;
    }
    printf("sum= %d\n", sum);
    }
    return 0;
}
