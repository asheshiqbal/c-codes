// Palindrome Check

#include <stdio.h>
int main()
{
    int i,l, flag=1;
    char s[100];
    
    gets(s);
    l = strlen(s);
    
    for(i=0;i<(l/2);i++)
    {
        if((s[i])!=(s[l-(i+1)]))
        {
            flag=0;
            break;
        }
    }
    
    if(flag==1)
        printf("Y");
    else printf("N");
}
