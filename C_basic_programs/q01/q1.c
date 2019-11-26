#include<stdio.h>


void main()
{
    int a,b;
    scanf("%d %d", &a,&b);
    printf("The value of a and b is %d and %d\n",a,b);


    a = a+b;
    b = a-b;
    a = a-b;

   printf("The swapped value of a and b is %d and %d\n",a,b);

}
