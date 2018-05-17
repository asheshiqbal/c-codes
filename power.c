// Power



#include <stdio.h>



int main()

{
    
	int a, n, i, r = 1;

	scanf("%d %d", &a, &n);

    
    for(i=1; i<=n; i++)

	{
		r *= a;
	}

    
    printf("%d", r);

}