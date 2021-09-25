#include <stdio.h>

int main () 
{
    int a, b, mod;
    printf("Enter two numbers for remainder: ");
    scanf("%d %d", &a, &b);
    mod = a % b;
    printf("Remainder of these two numbers are: %d\n", mod);
}