#include <stdio.h>
#include <stdlib.h>
int str2int(char str[], int size) {
    int num=0, i=0;
    char sign=1;
    if(str[0]=='-') {
        sign=-1;
        i++;
        size--;
    }
    while(size--) {
        num=num*10+str[i]-'0';
        i++;
    }

    return num*sign;
}

char* trianglesType(char str[]) {
    int num[3], f=0,l=0,i=0,check;
    char* type;
    while(str[l]) {
        if(str[l]>='0'&&str[l]<='9'||
                str[l]==' '&& str[0]!=' '&&
                (str[l]==' '&& str[l+1]!=' ')&&
                (str[l]==' '&&str[l+1]!=0)) {
            if(str[l]==' ') {
                num[i]=str2int(str+f,l-f);
                f=l+1;
                i++;
                l++;
            } else {
                l++;
            }
        } else {
            return "Not valid";
        }
    }

    num[i]=str2int(str+f,l-f);
    printf("tall= %d   %d   %d\n",
           num[0],num[1],num[2]);

    if ((num[0] + num[1]) > num[2] &&
            (num[0] + num[2]) > num[1] &&
            (num[1] + num[2]) > num[0]) {
        if ((num[0] == num[1]) &&
                (num[1] == num[2])) {
            return "Equilateral triangle";
        } else if ((num[0] == num[1]) ||
                   (num[0] == num[2]) ||
                   (num[1] == num[2])) {
            return "Isosceles triangle";
        } else {
            return "Scalene triangle";
        }
    } else {
        return "Not triangle";
    }

}



int main() {
    char arr[30]="5 6 10",*type;

    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; arr[i]; i++) {
        printf("%c",arr[i]);
        if(arr[i]==0) printf("%d",0);
    }
    printf("\n");
    type=trianglesType(arr);
    for(int i=0; type[i]; i++) {
        printf("%c",type[i]);
        // if(arr[i]==0) printf("%d",0);
    }
    return 0;
}
