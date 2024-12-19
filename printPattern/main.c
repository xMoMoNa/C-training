#include <stdio.h>
#include <stdlib.h>
void pattern_1(int n) {
    for(int i= 1; i<=n ; i++) {
        for(int j= n ; j>=1; j--) {
            if(j>=i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void pattern_2(int n) {
    for(int i=1; i<= n ; i++) {
        for(int j=1 ; j<=n  ;  j++) {
            if(j<=i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void pattern_3(int n) {
    for(int i=1; i<=2*n-1; i++) {
        for(int j=1; j<=2*n-1; j++) {
            if( (i==j) || ( i == (2*n-j) ) ) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void pattern_4(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=2*n+1; j++) {
            if( j>=n-i+1 && j<=n+i-1 ) {
                printf("*");
            } else {
                printf(" ");
            }

        }
        printf("\n");
    }
}
void pattern_5(int n) {
    for(int i=1; i<=2*n-1; i++){
        for(int j=1; j<2*n; j++){
            if((j>=n-i+1 && j<= n+i-1 && i<=n) || (j>=n-(2*n-i)+1 && j<= n+(2*n-i)-1 && i>n) ){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
int main() {
    int n, choice;
    while(1) {
        printf("Enter the number of Lines: ");
        scanf("%d", &n);
        printf("Choose:\n1- pattern 1:\n");
        pattern_1(5);
        printf("\n2- Pattern 2:\n");
        pattern_2(5);
        printf("\n3- pattern 3:\n");
        pattern_3(5);
        printf("\n4- Pattern 4:\n");
        pattern_4(5);
        printf("\n5- Pattern 5:\n");
        pattern_5(5);
        printf("\n6- all pattern:\n---------------\n");
        printf("Your choice: ");
        scanf("%d", &choice);
        switch(choice) {
        case 1:
            pattern_1(n);
            printf("\n");
            break;
        case 2:
            pattern_2(n);
            printf("\n");
            break;
        case 3:
            pattern_3(n);
            printf("\n");
            break;
        case 4:
            pattern_4(n);
            printf("\n");
            break;
        case 5:
            pattern_5(n);
            printf("\n");
            break;
        case 6:
            pattern_1(n);
            printf("\n");
            pattern_2(n);
            printf("\n");
            pattern_3(n);
            printf("\n");
            pattern_4(n);
            printf("\n");
            pattern_5(n);
            printf("\n");
            break;

        default:
            printf(">>> Wrong choice.. Try again!\n");
        }
    }
    return 0;
}






