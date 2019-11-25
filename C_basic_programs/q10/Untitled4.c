    #include <stdio.h>
    int main()
    {
        int n, ri = 0, rem, oi;
        printf("Enter an integer: ");
        scanf("%d", &n);
        oi = n;
        
        while( n!=0 )
        {
            rem = n%10;
            ri = ri*10 + rem;
            n /= 10;
        }
        
        if (oi == ri)
            printf("%d is a palindrome.", oi);
        else
            printf("%d is not a palindrome.", oi);
        
        return 0;
    }
