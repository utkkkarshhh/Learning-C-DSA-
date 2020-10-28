#include <stdio.h>

int main ()
{
    int n, i = 1 ;
    printf("Enter a number to print its mutlitple:\n");
    scanf("%d", &n);

    do
    {
      printf("%d\n" , i * n);
      i++;  
    } while (i<=10);
    
    return 0;

}