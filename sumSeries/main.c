#include <stdio.h>
#include <stdlib.h>
int sumSeries(int start, int end) {
    int n = end-start+1;
    if(n%2) {
        return (n/2)*(start+end)+start+n/2;
    } else {
        return n/2*(start+end);
    }
}

int main() {
    int start, end;
    while(1) {
        printf("Enter Start number: ");
        scanf("%d", &start);
        printf("Enter end number: ");
        scanf("%d", &end);
        printf("Summation = %d\n",sumSeries(start, end));
    }
}
