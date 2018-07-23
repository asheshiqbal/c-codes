// Perefct numbers in a range

#include <stdio.h>

int main()
{
    int i, j, a, b, c;
    scanf("%d %d", &a, &b);

    for(i=a; i<=b; i++)
    {
        c = 1;
        for(j=2; j<=(i/2); j++)
        {
            if((i%j)==0)
            {
                c += j;
            }
        }
        if(c!=1 && c == i)
        {
            printf("%d ", i);
        }
    }
}
