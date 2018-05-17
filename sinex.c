// sine (x)




#include <stdio.h>



int main()

{
	int i, n = 4, deg;
	float r, x, term ;
	scanf("%d", &deg);
	x = deg*3.1416/180;
	
	term = x;
	r = x;
	
	for(i=1; i<=n; i++)
	{
		term = term * (-1)* x*x/((i+1)*(i+2));
		r += term;
	}

	printf("%f", r);
}