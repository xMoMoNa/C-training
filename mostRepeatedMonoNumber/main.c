#include <stdio.h>
#include <stdlib.h>
int MostRepeatedMonoNumber() {
    int num, numc, count=0, maxR=0, maxRN=0, i=9;
    printf("enter number: ");
    scanf("%d", &numc);
    num=numc;
    count++;
    if(numc>9) return -1;
    while(i--) {
        printf("enter number: ");
        scanf("%d", &numc);
        if(numc>9) {
            return -1;
        }
        if(num==numc){
            count++;
            if(count>maxR){
                maxR=count;
                maxRN= numc;
            }
        } else{
            num=numc;
            count=0;
        }
    }
    printf("number: %d, Repeated: %d", maxRN, maxR);
    return maxRN;
}
int main() {
    MostRepeatedMonoNumber();
    return 0;
}
