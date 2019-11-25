    #include <stdio.h>
    #include <math.h>
    int dtoo(int d);
    int main()
    {
        int d;
        printf("Enter a decimal number: ");
        scanf("%d", &d);
        printf("%d in decimal = %d in octal\n", d, dtoo(d));
        return 0;
    }
    int dtoo(int d)
    {
        int oc = 0, i = 1;
        while (d != 0)
        {
            oc += (d % 8) * i;
            d /= 8;
            i *= 10;
        }
        return oc;
    }