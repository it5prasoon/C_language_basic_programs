#include<stdio.h>
int fact(int);
int main()
{
    int n;
    printf("Enter a Positive number: ");
    scanf("%d",&n);
    printf("Factorial = %d\n",fact(n));
return 0;
}

int fact(int n)
{
    if(n>=1)
    return n*fact(n-1);
    else
    {
        return 1;
    }
    
  
}