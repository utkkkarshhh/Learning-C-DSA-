#include <stdio.h>

int main () 
{
    int a, b, div;
    printf("Enter two numbers for divison: ");
    scanf("%d %d", &a, &b);
    div = a % b;
    printf("Divide of these two numbers are: %d\n", div);
}