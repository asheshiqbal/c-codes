// Fibonacci

#include<stdio.h>

int main()
{
    int t1=0, t2=1, i, next, n=10;
    
    for (i = 0; i < n; i++)
    {
        printf("%d ", t1);
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
}