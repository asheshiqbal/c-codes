// Check the input to be a valid IPv4 address

#include<stdio.h>

int finalcheck(char s[])
{
    int num;
    sscanf(s, "%d", &num);
    if(num<256)
        return 1;
    else return 0;
}

int main()
{
	int i, j, k, n, l, flag = 1;
	char a[15], b[3];

	scanf("%s", a); // In case of string input, & is not mandatory

	l = strlen(a);

 	for(i=0; i<l; i++)
 	{
 	    // Sol 1: if(!((a[i]>='0' && a[i]<='9') || a[i]=='.'))
 	    // Sol 2:
 	    if((a[i]<'0' || a[i]>'9') && a[i]!='.') // when a[i] is '.', if(1 and 0) = if(0); so if is skipped
 	                                            // when 0<=a[i]<=9, if(0 and 1) = if(0); so if is skipped
 	                                            // when a[i] is any other character, if(1 and 1) = if(1); so if is executed
 	    {
 	        flag = 0;
 	        break;
 	    }
 	}
 	if(flag == 0)
 	{
 	    printf("INVALID");
 	    return 0;
 	}

 	j = 0;
 	for(k=0; k<l; )
    {
        while(a[k]!='.')

        {
            if  (a[k]=='\0')
                break;
            b[j] = a[k++];
            j++;
        }
        b[j] = '\0';
        if(finalcheck(b)==0)
        {
            flag = 0;
            break;
        }
        else
        {
            j = 0;
            k++;
        }
    }
    if(flag == 0)
 	{
 	    printf("INVALID");
 	}
 	else printf("VALID");
}
