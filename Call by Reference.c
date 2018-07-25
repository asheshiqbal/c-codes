#include<stdio.h>

void swap(int *a, int *b)
{
    *a =  *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main()
{
    int x,y;
    scanf("%d %d", &x, &y);
    printf("X = %d and Y = %d", x, y);

    swap(&x,&y); // Calling by reference, the user-defined function must receive these addresses by pointers

    printf("\nX = %d and Y = %d", x, y);
}

