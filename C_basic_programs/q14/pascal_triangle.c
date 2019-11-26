#include <stdio.h>

void main()
{
    int rows,var=1,k,i,j;
    printf("Enter the Number of rows: ");
    scanf("%d",&rows);
    for(i=0;i<rows;i++)
    {
        for(k=1;k<=rows-i;k++)
        printf("  ");
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0)
                var=1;
            else
               var=var*(i-j+1)/j;
            printf("%4d",var);
        }
        printf("\n");
    }
}
