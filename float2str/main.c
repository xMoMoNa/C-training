#include <stdio.h>
#include <stdlib.h>
int str2int(char str[]) {
    int num=0, i=0;
    if(str[0]=='-') {
        num=num*-1;

        i++;
    }
    while(str[i]) {
        num=num*10+str[i]-'0';
        i++;
    }

    return num;
}
void int2str(int num, char str[]) {
    int tmp=num, i=0, sign=0;
    if(num<0) {
        num=num*-1;
        sign=1;
        i++;
    }
    while(tmp!=0) {
        tmp=tmp/10;
        i++;
    }
    tmp=num;
    str[i--]=0;
    while(tmp) {
        str[i]=tmp%10+'0';
        tmp=tmp/10;
        i--;
    }
    if(sign) str[0]='-';
}

void float2str(float num, char str[],int preci) {
    int n=num, i=0;
    int2str((int)num, str);
    if(num<0) {
        num=num*-1;
        n=n*-1;
    }
    while(str[i]!=0) {
        i++;
    }
    str[i]='.';
    i++;
    num=num-n;
    //printf("%f",num);
    while(preci--) {
        num=num*10;
        str[i]=((int)(num))+'0';
        n=num;
        num=num-n;
        i++;
    }
    str[i]=0;
}


int main()
{
    char arr[31]="0",type[10];
    float num=-311.65;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; arr[i]; i++) {
        printf("%c",arr[i]);
        if(arr[i]==0) printf("%d",0);
    }
    printf("\nfloat=%f\n",num);

    float2str(num,type,2);
    printf("type= ");
    for(int i=0; type[i]; i++) {
        printf("%c",type[i]);
        //if(arr[i]==0) printf("%d",0);
    }
    return 0;
}
