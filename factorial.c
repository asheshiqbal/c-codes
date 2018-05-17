// Factorial

#include<stdio.h>

int f(int a)
{
    if(a>1)
    return(a*f(a-1));
    else return(1);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",f(n));
}

/* without recursion
int main()
{
    int n, i, f = 1;
    scanf("%d", &n);
    for(i=n; i>=1; i--)
    {
        f = f * i;
    }
    printf("%d", f);
}*/
