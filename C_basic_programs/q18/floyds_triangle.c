#include <stdio.h>

void main()
{
    int row,c=0,k,i,j;
    printf("Input number of rows: ");
    scanf("%d",&row);
    for(i=0;i<=row;i++)
    {
        for(j=0;j<=i;j++)
        {
            c++;
            printf(" %d ",c);
        }
        printf("\n");
    }
}