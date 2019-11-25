#include <stdio.h>
int main()
    {
        char c1[100], c2[100], i;
        printf("Enter string c1: ");
        scanf("%s",c1);
        for(i = 0; c1[i] != '\0'; ++i)
        {
            c2[i] = c1[i];
        }
        c2[i] = '\0';
        printf("String c2: %s", c2);
        return 0;
    }