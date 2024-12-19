#include <stdio.h>
#include <stdlib.h>

int matrixMul(int **arr1, int r1, int c1, int **arr2, int r2, int c2, int ***result, int dimension[])
{
    if(c1!=r2)
    {
        return -1;
    }

    int r=r1, c=c2;
    dimension[0]=r;
    dimension[1]=c;
    int **res = (int**) malloc(r*c*sizeof(int));
    for(int i= 0; i<r; i++)
    {
        for(int j=0; j< c; j++)
        {
            res[i][j]=0;
            for(int k=0; k< r2; k++)
            {
                res[i][j] += arr1[i][k]*arr2[k][j];

            }
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    *result=res;
    return 1;
}

int main()
{
    int arr1[3][3]=
    {
        {1,2,3},
        {1,5,6},
        {5,6,3}
    };
    int arr2[3][1]=
    {
        {6},
        {6},
        {8}
    };
    int **result, dimension[2]= {0};
    if(matrixMul(arr1, 3, 3, arr2, 3, 1, &result, dimension)!= -1)
    {
        for(int i=0; i<dimension[0]; i++)
        {
            for(int j=0; j<dimension[1]; j++)
            {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
