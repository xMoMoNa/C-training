#include <stdio.h>
#include <stdlib.h>
char maxZeros(long long n) {
    int flag = 0, sum=0, max=0;
    while(n>0) {
        if(n&1) {
            flag = 1;
            if(sum>max) {
                max=sum;
            }
            sum=0;
        } else {
            if(flag) {
                sum++;
            }
        }
        n=n>>1;
    }
    return max;
}
int main() {
    long long n;
    while(1) {
        printf("Enter a number: ");
        scanf("%lld", &n);
        printf(">>> %d\n", (int) maxZeros(n));
    }
    return 0;
}
