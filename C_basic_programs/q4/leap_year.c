#include<stdio.h>
void main()
{
    int a;

    printf("Enter Year: ");
    scanf("%d",&a);

    if(a%4==0)
        printf("Year is a leap year.\n");
    else if(a%100==0)
    {
        if(a%400==0)
            printf("Year is leap year.\n");
        else
            printf("Not a leap year.\n");
    }
    else
        printf("Not a leap year.");

}
