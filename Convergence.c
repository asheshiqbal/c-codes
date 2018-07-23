// Convergance by Summation

#include<stdio.h>

int main()
{
    int s=0, n=1234;
    while(n>0)
    {
        while(n>0)
        {
            s += n%10;
            n = n/10;
        }
        printf("%d ",s);
        if(s>9)
        {
            n=s;
            s=0;
        }   
    }
}
