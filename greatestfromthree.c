// Greatest from three

#include<stdio.h>

int main()
{
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);

    if((a>b)&&(a>c))
        printf("%d", a);
    else if((b>c)&&(b>a))
        printf("%d", b);
    else if((c>a)&&(c>b))
        printf("%d", c);
    
    /*if(a > b)
    {
        if(c > a)
        {
            printf("%d", c);
        }
        else printf("%d", a);
    }
    else if(c > b)
    {
        printf("%d", c);
    }
    else printf("%d", b);*/
}