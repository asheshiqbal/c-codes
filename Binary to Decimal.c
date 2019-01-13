#include<stdio.h>
#include<math.h>

int main()
{
    int a, b[10], c=0, i, l;
    scanf("%d", &a);
    i=0;
    while(a>0)
    {
        b[i] = a%10;
        a /= 10;
        i++;
    }
    l = i;
    for(i=0; i<l; i++)
    {
        c += b[i] * pow(2,i);
    }
    printf("%d", c);
}
