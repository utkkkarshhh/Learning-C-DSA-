#include <stdio.h>

int main ()
{
    int a, b, big;
    printf("Enter two numbers to check the bigger one: \n");
    scanf("%d %d", &a, &b); 

    a = big;

    if (b > a) big = b;
    printf("The larger number is: %d", big);
}