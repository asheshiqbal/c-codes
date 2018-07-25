// Check the input to be a valid IPv4 address

#include<stdio.h>
#include<string.h>

int main()
{
	int i, j, n, l, flag = 1;
	char a[15];
	
	scanf("%s", a); // In case of string input, & is not mandatory
	
	l = strlen(a);
	printf("%d\n", l);
	
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
 	}
 	else printf("PRIMARILY VALID...PROCEEDING WITH DETAIL VERIFICATION");
}
