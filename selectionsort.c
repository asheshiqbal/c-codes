#include <stdio.h>
#include<stdlib.h>

int main()
{
    int i, j, n=10, min, tmp;
    int a[10];
    for(i=0;i<n;i++)
    {
        a[i] = rand()%500;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
////////////////////////////////////////
    for(i=0;i<n;i++)
    {
        min = i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min = j;
            }
        }
        tmp = a[i];
        a[i] = a[min];
        a[min] = tmp;
    }
////////////////////////////////////////
    printf("\n");
    for(i=0;i<n;i++)
    {
        /* if(i!=n-1 && a[i]>a[i+1])
        {
            printf("WRONG!!!");
            return;
        } */
        printf("%d ", a[i]);
    }
}
