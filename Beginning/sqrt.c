#include <stdio.h>
#include <math.h>

int main()

{
int a, result;
start : printf("Enter a number to find it's square root:\n");
scanf ("%d", &a);
if (a < 0)
goto start;
else 
result= sqrt(a);

printf("Sqaure root is: %d", result);

return 0;

}