#include<stdio.h>

void main()
{


    int n, ri = 0, rem, oi;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while( n!=0 )
        {
            rem = n%10;
            ri = ri*10 + rem;
            n /= 10;
        }
    
printf("Reversed number: %d",ri);



}