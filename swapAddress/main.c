#include <stdio.h>
#include <stdlib.h>
void swap(int** p1, int** p2){
    int* temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}

int main()
{
    int x,y;
    int *p1=&x, *p2=&y;
    printf("%p   %p\n",&x,&y);
    printf("%p   %p\n",p1,p2);
    swap(&p1, &p2);
    printf("%p   %p\n",p1,p2);
    return 0;
}
