#include<stdio.h>

void main()
{

    float n1,n2;
    char op;

    printf("Enter Operation: ");
    scanf("%f%c%f",&n1,&op,&n2);

    switch(op)
    {
    case '+':
        printf("Addition = %0.0f",n1+n2);
        break;
    case '-':
        printf("Subtraction = %0.0f",n1-n2);
        break;
    case '*':
        printf("Multiplication = %0.0f",n1*n2);
        break;
    case '/':
        printf("Division = %0.2f",n1/n2);
        break;
    default:
       printf("ErroR!");

    }


}
