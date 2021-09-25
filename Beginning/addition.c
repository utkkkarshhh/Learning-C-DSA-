#include <stdio.h>

int main () 
{
    int a, b, sum;
    printf("Enter two numbers for addition: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum of these two numbers are: %d\n", sum);
}