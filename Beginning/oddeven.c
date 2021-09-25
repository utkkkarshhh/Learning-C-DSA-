#include <stdio.h>

int main ()
{
    int n;
    printf("Enter a number to check weather its ODD or EVEN: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("The number is EVEN");
    }
    else
    {
        printf("The number is ODD");
    }
}