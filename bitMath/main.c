#include <stdio.h>
#include <stdlib.h>
void setBit(int* n, int bit) {
    *n=*n|(1<<bit);
}
void clearBit(int* n, int bit) {
    *n=*n&(~(1<<bit));
}
void toogleBit(int* n, int bit) {
    *n=*n^(1<<bit);
}
void readBit(int n, int bit) {
    int flag=0;
    for(int i=31; i>=0; i--) {
        if((n>>i)&1)
            flag =1;
        if (flag)
            printf("%d",(n>>i)&1);
    }
}
int main() {
    int n, bit, choice;
    while(1) {
        printf("Choose:\n1- set bit\n2- clear bit\n3- toogle bit\n4- read bit\n>> your choice: ");
        scanf("%d", &choice);
        printf("Enter a number: ");
        scanf("%d",&n);
        if (choice!=4) {
            printf("Enter a number of bit to change: ");
            scanf("%d",&bit);
        }
        printf(">>> ");
        switch(choice) {
        case 1:
            setBit(&n, bit);
            printf("%d\n", n);
            break;

        case 2:
            clearBit(&n, bit);
            printf("%d\n", n);
            break;

        case 3:
            toogleBit(&n, bit);
            printf("%d\n", n);
            break;

        case 4:
            readBit(n, bit);
            printf("\n");
            break;

        default:
            printf("wrong choice.. Try again!\n");
            break;
        }

    }
}
