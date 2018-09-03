//PASCAL'S TRIANGLE

#include<stdio.h>

int fact(int n)
{
    if(n==0||n==1)
        return(1);
    else return(n*fact(n-1));
}

int comb(int n, int r)
{
    return(fact(n)/(fact(r)*fact(n-r)));
}

int main()
{
    int i, j, k, l;

    scanf("%d", &l);

    for(i=0; i<l; i++)
    {
        for(k=l; k>i; k--)
        {
            printf(" ");
        }

        j=0;
        while(j<=i)
        {
            printf("%d ", comb(i, j));
            j++;
        }

        printf("\n");
    }
}
