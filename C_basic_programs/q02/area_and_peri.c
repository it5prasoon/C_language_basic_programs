
#include<stdio.h>
#include<math.h>

void main()
{
    int r;
    float area,peri;
    scanf("%d", &r);
    printf("The value of radius is %d \n",r);

    area = (3.14)*pow(r,2);
    peri = 2*(3.14)*r;
   printf("Area = %f\n",area);
   printf("Circumference = %f",peri);


}
