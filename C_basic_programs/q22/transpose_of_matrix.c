#include<stdio.h>

int main()
{
  int m[10][10],i,j,a;

  printf("Please enter the size of Matrix: ");
  scanf("%d",&a);
  

  printf("Enter the elements of matrices in row-wise fashion");
  printf("\n");
  printf("Matrix Elements: ");
  for(i=0;i<a;i++)
  {
    for(j=0;j<a;j++)
        {
            scanf("%d",&m[i][j]);
        }
  }

 printf("\n");
  printf("Matrix: \n");
  for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

   printf("\n");
    printf("Transpose of Matrix: \n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            printf("%d\t", m[j][i]);
        }
        printf("\n");
    }


}