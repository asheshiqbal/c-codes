// Perefct number checking

#include <stdio.h>

int main()
{
    int i, a, b=1;
    scanf("%d", &a);
    
    for(i=2; i<=(a/2); i++)
    {
        if((a%i)==0)
        {
            b += i;
        }
    }
    
    if(b == a)
        printf("Perfect :)");
    else printf("Imperfect :(");
}
