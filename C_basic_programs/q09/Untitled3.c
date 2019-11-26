#include<stdio.h>

void main()
{
    int i, num, sum=0;
    printf("Enter the num:");
    scanf("%d",&num);
    for (i=1; i<num; i++)
    {
            if(num % i == 0)
                {
                    sum+=i;
                }
        }
   if(sum==num)
    printf("Perfect No.");
   else
    printf("Not a Perfect no.");

}
