#include<stdio.h>

int lcmr(a,b)
{
    static int i=1;

    if((i%a)==0 && (i%b)==0)
        return(i);
    else
    {
        i += 1;
        lcmr(a,b);
    }
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", lcmr(a,b));
}
