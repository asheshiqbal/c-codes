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
