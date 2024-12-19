#include <stdio.h>
#include <stdlib.h>
int maxXor(int l, int r){
    int max=0;
    for(int i=l; i<=r; i++){
        for(int j=i; j<=r; j++){
            if((i^j) > max)
                max=i ^ j;
        }
    }

    return max;
}
int main()
{
    int l, r;
    while(1){
        printf("Enter L: ");
        scanf("%d",&l);
        printf("Enter R: ");
        scanf("%d",&r);
        printf(">>> Maximum XOR between %d and %d = %d\n", l, r, maxXor(l, r));
    }

    return 0;
}
