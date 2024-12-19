#include <stdio.h>

int main(void){
	int x[10],size=10,i,j,tmp;
	for(i=0;i<size;i++){
		printf("Please enter element %d: ",i);
		scanf("%d",&x[i]);
	}

	for(i=0;i<size-1;i++){
		for(j=0;j<size-1-i;j++){
			if (x[j]>x[j+1]){
				tmp=x[j];
				x[j]=x[j+1];
				x[j+1]=tmp;
			}
		}
	}
	for(i=0;i<size-1;i++){
	printf("%d ",x[i]);
	}
	return 0;
}
