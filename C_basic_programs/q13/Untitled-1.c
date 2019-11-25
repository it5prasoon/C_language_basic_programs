  #include <stdio.h>
    int hcf(int n1, int n2);
    int lcm(int a, int b);
    int main()
    {
       int n1, n2;
       printf("Enter two positive integers: ");
       scanf("%d %d", &n1, &n2);
       printf("L.C.M of %d and %d is %d.\n", n1, n2, lcm(n1,n2));
       return 0;
    }

    int lcm(int a, int b)
    {
            return (a*b)/hcf(a, b);
    }
    int hcf(int n1, int n2)
    {
        if (n2 != 0)
           return hcf(n2, n1%n2);
        else 
           return n1;
    }