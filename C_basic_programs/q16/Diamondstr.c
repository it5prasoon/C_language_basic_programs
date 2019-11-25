#include<stdio.h>

void main()
{
    int row,i,j,k,t;

    scanf("%d",&row);
    
    k=row-1;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=k;j++)
        printf(" ");

        k--;
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
    printf("\n");
    }

    k=1;
    
    for(i=1;i<=row-1;i++)
    {
        for(j=1;j<=k;j++)
        printf(" ");

        k++;
        for(j=1;j<=2*(row-i)-1;j++)
        {
            printf("*");
        }
    printf("\n");
    }


}