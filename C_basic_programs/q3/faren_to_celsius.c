#include<stdio.h>


void main()
{
    float a,c;

    printf("The value of temp in degree Fahrenheit is: ");
    scanf("%f",&a);

    c = (5*(a-32))/9;

    printf("The value in degree celcius is %f",c);


}
