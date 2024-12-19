#include <stdio.h>
#include <stdlib.h>
char checkEven(int n) {
    return !(n&1);
}

char capChar (unsigned char c) {
    switch(c) {
    case 'A' ... 'Z' :
        return 'a'+(c-'A');
        break;
    case 'a'...'z' :
        return 'A'+(c-'a');
        break;
    default:
        return -1;
        break;
    }
}

int main() {
    int n;
    char c;
    while(1) {

        printf("Enter an integer number: ");
        fflush(stdin);
        scanf("%d",&n);
        printf("Enter a character: ");
        fflush(stdin);
        scanf("%c", &c);
        if(checkEven(n)) {
            if(capChar(c) != -1) {
                printf(">>> %c\n",c);
            } else {
                printf(">>> Error: You did not enter a character!\n");
            }
        } else {
            if(capChar(c) != -1) {
                printf(">>> %c\n",capChar(c));
            } else {
                printf(">>> Error: You did not enter a character!\n");
            }
        }
    }
}
