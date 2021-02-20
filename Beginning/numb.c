#include <stdio.h>

int main ()
{
    int a;
    printf("Enter a Number:");
    scanf("%d", &a);

    if (a % 2 == 0)
        printf ("Number is Even");

        else
        printf ("Number is Odd");

        return 0;
        
}