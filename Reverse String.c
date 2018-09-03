#include<stdio.h>

int main()
{
    int i, l, t;

    char s[20];

    gets(s);
    l = strlen(s);

    for(i=0; i<=l/2; i++)
    {
        t = s[l-(i+1)];
        s[l-(i+1)] = s[i];
        s[i] = t;
    }

    puts(s);
}

