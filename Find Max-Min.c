// Find the Maximum and the Minimum from the input numbers.

#include<stdio.h>

int main()
{
    int ip, i, n, max=-100000, min=100000;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&ip);
        
        if(ip>max)
            max=ip;
        if(ip<min)
            min=ip;
    }
    
    printf("%d %d",max,min);
}
