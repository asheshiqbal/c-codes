// LCM and GCD

#include<stdio.h>

int main()
{
    int i, a, b, s, l;
    scanf("%d %d", &a, &b);

    if(a==b)
    {
        printf("LCM and GCD both are %d", a);
        return 0;
    }
    else if(a>b)
    {
        l = a;
        s = b;
    }
    else
    {
        l = b;
        s = a;
    }

    // LCM
    for(i=l; i<=(s*l); i++)
    {
        if((i%s)==0 && (i%l)==0)
        {
            printf("LCM is %d", i);
            break;
        }
    }

    printf("\n");

    // GCD
    for(i=s; i>=1; i--)
    {
        if((s%i)==0 && (l%i)==0)
        {
            printf("GCD is %d", i);
            break;
        }
    }
}
