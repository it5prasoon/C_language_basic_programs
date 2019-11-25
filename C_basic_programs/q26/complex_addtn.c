#include<stdio.h>
struct complex 
{
int real;
int img;
int add;
}
void main()
{

struct complex c1,c2,c3;

printf("Enter value of c1-real imaginary : ");
scanf("%d %d", &c1.real,&c1.img);
printf("Entered value of c1 is %d + %di.\n",c1.real,c1.img);

printf("Enter value of c2-real imaginary : ");
scanf("%d %d", &c2.real,&c2.img);
printf("Entered value of c2 is %d + %di.\n\n",c2.real,c2.img);

c3.real=c1.real+c2.real;
c3.img=c1.img+c2.img;


printf("Addition = %d + %di",c3.real,c3.img);


}