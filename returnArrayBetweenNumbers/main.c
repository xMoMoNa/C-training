#include <stdio.h>
#include <stdlib.h>
int* returnarray(int n1, int n2, int* size){
    int i;
    if (n1 > n2){
        n1=n1+n2;
        n2=n1-n2;
        n1=n1-n2;
    }
    *size = n2-n1-1;
    int* arr = (int*) malloc(*size * sizeof(int));
    for(i=0; i<*size; i++){
        arr[i] = (++n1);
    }
    return arr;
}

int main()
{
    int n1, n2, size, *arr,i;

    while(1){
        printf("enter two number: "); scanf("%d %d", &n1,&n2);
        arr=returnarray(n1, n2, &size);
        for(i=0;i<size; i++){
            printf("%d  ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
