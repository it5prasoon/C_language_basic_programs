#include<stdio.h>

int main()
{
  int m1[10][10], m2[10][10], M[10][10], i,j,k,a,b;

  printf("Please enter the size of Matrix: ");
  scanf("%d",&a);

  printf("Enter the elements of matrices in row-wise fashion");
  printf("\n");
  printf("Matrix 1 Elements: ");
  for(i=0;i<a;i++)
  {
  for(j=0;j<a;j++)
  {
  
  scanf("%d",&m1[i][j]);
  }
  }

  printf("\n");
  printf("Matrix 2 Elements: ");
  for(i=0;i<a;i++)
  {
  for(j=0;j<a;j++)
  {
  scanf("%d",&m2[i][j]);
  }
  }
 printf("\n");
  printf("Matrix 1: \n");
  for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            printf("%d\t", m1[i][j]);
        }
        printf("\n");
    }
  printf("Matrix 2: \n");
  for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            printf("%d\t", m2[i][j]);
        }
        printf("\n");
    }

  for(i=0;i<a;i++)
     for(j=0;j<a;j++)
         {
           M[i][j] = 0;
           for(k=0;k<a;k++)
           M[i][j] = M[i][j] + m1[i][k]*m2[k][j];
         }
printf("Multiplication: \n");
  for (i = 0; i < a; i++)
    {for (j = 0; j < a; j++)
        {
            printf("%d\t", M[i][j]);
        }
        printf("\n");}

return 0;
}
