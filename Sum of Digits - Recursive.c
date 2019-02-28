#include<stdio.h>

int sod(int n)
{
    if(n>0)
        return(n%10 + sod(n/10));
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", sod(n));
}
