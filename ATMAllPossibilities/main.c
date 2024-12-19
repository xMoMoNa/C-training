#include <stdio.h>
#include <stdlib.h>
unsigned int atmAll(unsigned int num) {
    unsigned int count=0;
    long long int n=0;
    unsigned char sign, i, money[]= {200, 100, 50, 20, 10, 5, 1};
    unsigned int parameter[7] = {0};
    for (parameter[0] = 0;
            parameter[0]*money[0]<= num;
            parameter[0]++) {

        for (parameter[1] = 0;
                parameter[1]*money[1]+parameter[0]*money[0]<= num;
                parameter[1]++) {

            for (parameter[2] = 0;
                    parameter[2]*money[2]+parameter[1]*money[1]+parameter[0]*money[0]<= num;
                    parameter[2]++) {

                for (parameter[3] = 0;
                        parameter[3]*money[3]+parameter[2]*money[2]+parameter[1]*money[1]+
                        parameter[0]*money[0]<= num;
                        parameter[3]++) {

                    for (parameter[4] = 0;
                            parameter[4]*money[4]+parameter[3]*money[3]+parameter[2]*money[2]+
                            parameter[1]*money[1]+parameter[0]*money[0]<= num;
                            parameter[4]++) {

                        for (parameter[5] = 0;
                                parameter[5]*money[5]+parameter[4]*money[4]+parameter[3]*money[3]+
                                parameter[2]*money[2]+parameter[1]*money[1]+parameter[0]*money[0] <= num;
                                parameter[5]++) {

                            for (parameter[6] = 0;
                                    parameter[6]*money[6]+parameter[5]*money[5]+parameter[4]*money[4]+
                                    parameter[3]*money[3]+parameter[2]*money[2]+parameter[1]*money[1]+
                                    parameter[0]*money[0]<= num;
                                    parameter[6]++) {
                                n++;
                                sign = -1;
                                if(parameter[6]*money[6]+parameter[5]*money[5]+parameter[4]*money[4]+
                                        parameter[3]*money[3]+parameter[2]*money[2]+parameter[1]*money[1]+
                                        parameter[0]*money[0] == num) {
                                    count++;
                                    for(i=0; i<7; i++) if(parameter[i]) sign++;

                                    if(parameter[6]) {
                                        printf("%5d * [1  ]", parameter[6]);
                                        if(sign) {
                                            printf("  +");
                                            sign--;
                                        } else {
                                            printf("\n");
                                            break;
                                        }
                                    }
                                    if(parameter[5]) {
                                        printf("%5d * [5  ]", parameter[5]);
                                        if(sign) {
                                            printf("  +");
                                            sign--;
                                        } else {
                                            printf("\n");
                                            break;
                                        }
                                    }
                                    if(parameter[4]) {
                                        printf("%5d * [10 ]", parameter[4]);
                                        if(sign) {
                                            printf("  +");
                                            sign--;
                                        } else {
                                            printf("\n");
                                            break;
                                        }
                                    }
                                    if(parameter[3]) {
                                        printf("%5d * [20 ]", parameter[3]);
                                        if(sign) {
                                            printf("  +");
                                            sign--;
                                        } else {
                                            printf("\n");
                                            break;
                                        }
                                    }
                                    if(parameter[2]) {
                                        printf("%5d * [50 ]", parameter[2]);
                                        if(sign) {
                                            printf("  +");
                                            sign--;
                                        } else {
                                            printf("\n");
                                            break;
                                        }
                                    }
                                    if(parameter[1]) {
                                        printf("%5d * [100]", parameter[1]);
                                        if(sign) {
                                            printf("  +");
                                            sign--;
                                        } else {
                                            printf("\n");
                                            break;
                                        }
                                    }
                                    if(parameter[0]) {
                                        printf("%5d * [200]", parameter[0]);
                                        if(sign) {
                                            printf("  +");
                                            sign--;
                                        } else {
                                            printf("\n");
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    printf("all count = %llu\n", n);
    return count;
}
int main() {
    unsigned int num, x;
    while(1) {
        printf("Enter money lower than 500: ");
        scanf("%u", &num);
        x = atmAll(num);
        printf("All possibilities of %u = %u\n", num, x);
    }
    return 0;
}
