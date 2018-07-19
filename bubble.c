#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n=10, tmp;
    int a[10];
    for(i=0;i<n;i++)
    {
        a[i] = rand()%20;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
////////////////////////////////////////
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j+1]<a[j])
            {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
////////////////////////////////////////
    printf("\n");
    for(i=0;i<n;i++)
    {
        /*if(i!=n-1 && a[i]>a[i+1])
        {
            printf("Wrong!!!");
            return;
        }*/
        printf("%d ", a[i]);
    }
}
