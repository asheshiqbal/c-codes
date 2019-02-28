#include<stdio.h>

int fibr(m)
{
    if(m==0 || m==1)
        return(m);
    else return(fibr(m-1) + fibr(m-2));
}

int main()
{
    int i, n;
    scanf("%d", &n);
    for(i=0; i<=n; i++)
        printf("%d ", fibr(i));
}
