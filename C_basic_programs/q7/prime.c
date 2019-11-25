#include<stdio.h>
void main()
{
    int n1,n2,flag,i;
    printf("Enter Range: ");
    scanf("%d",&n1);
    scanf("%d",&n2);

 while(n2>n1)
 {
     flag = 0;
  for(i=2;i<=n1/2;++i)
    if(n1%i==0)
    {
     flag = 1;
     break;
    }
    if(flag==0)
        printf("%d\t",n1);
    ++n1;
    
 }
}
