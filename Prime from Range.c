#include<stdio.h>

int main()
{
    int a, b, i, j, flag;
    scanf("%d %d", &a, &b);
    for(i=a; i<=b; i++)
    {
        flag = 1;
        for(j=2; j<=(i/2); j++)
        {
            if(i%j==0)
            {
                flag = 0;
                break;
            }
        }
        if(flag==1)
        {
            printf("%d ", i);

        }
    }
}
