#include <stdio.h>
    #include <math.h>
    int dtob(int d);
    int main()
    {
        int d;
        printf("Enter a decimal number: ");
        scanf("%d", &d);
        printf("%d in decimal = %d in binary\n", d, dtob(d));
        return 0;
    }
    int dtob(int d)
    {
        int bi = 0, i = 1;
        while (d != 0)
        {
            bi += (d % 2) * i;
            d /= 2;
            i *= 10;
        }
        return bi;
    }