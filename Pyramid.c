#include<stdio.h>

int main()
{
    int n,i,j;
    scanf("%d", &n);
    for(i=n; i>0; i--)
    {
        for(j=i-1; j>0; j--)
        {
            printf(" ");
        }
        for(j=0; j<((n-i)*2)+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}