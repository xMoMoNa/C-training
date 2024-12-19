#include <stdio.h>
#include <stdlib.h>


int strLen(char* str) {
    int len=0;
    while(str[len]) len++;
    return len;
}

void shiftChar(char str[], int size,
               int times, char dir) {
    char temp;
    if(dir==1) {
        while(times--) {
            temp=str[0];
            for(int i=0; i<size-1; i++) {
                str[i]=str[i+1];
            }
            str[size-1]=temp;
        }
    } else if(dir==0) {
        while(times--) {
            temp=str[size-1];
            for(int i=size-1; i>=0; i--) {
                str[i]=str[i-1];
            }
            str[0]=temp;
        }
    }
}
int strFindIndex(char *strMain,char *strFind) {
    int i=0,j=0, flag=1;
    while(strMain[i]) {
        j=0;
        flag=1;
        while(strFind[j]) {
            if(strFind[j]!=strMain[i]) {
                flag=0;
                break;
            }

            i++;
            j++;
        }

        if(flag) break;
        i++;
    }
    if(flag)
        return i-j;
    else
        return -1;
}
void strCopy(char* str1, char* str2) {
    int i=0;
    while(*str2) {
    *str1=*str2;
    str1++;
    str2++;
    }
}

void findReplace(char *strMain, char *strFind,
                 char* strReplace) {
    int lenFind=strLen(strFind);
    int lenReplace=strLen(strReplace);
    int lenMain=strLen(strMain);
    int find=strFindIndex(strMain,strFind);
    int diffrence = lenReplace-lenFind;
    char* startPoint=strMain+find+lenFind;
    printf("size:%d  start:%d  diffrence:%d\n",
           lenMain-find-lenFind+diffrence,
           startPoint-strMain,diffrence);
    if(find!=-1) {
        if(diffrence>0) {
            shiftChar(startPoint,
                      lenMain-find-lenFind+diffrence,
                      diffrence,0);
            strCopy(&strMain[find], strReplace);
        } else if(diffrence <0) {
            shiftChar(startPoint+diffrence,
                      lenMain-find-lenReplace+1,
                      -1*diffrence,1);
            strCopy(&strMain[find], strReplace);
        } else if(diffrence==0) {
            strCopy(&strMain[find], strReplace);
        }
    }
}

int main()
{
    char arr[30]=
        "ahmed mohamed ayman kamel";
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; arr[i]; i++) {
        printf("%c",arr[i]);
        if(arr[i]==0) printf("%d",0);
    }
    printf("\n");
    findReplace(arr,"mohamed","Mohsen");

    for(int i=0; arr[i]; i++) {
        printf("%c",arr[i]);
        if(arr[i]==0) printf("%d",0);
    }
    return 0;
}
