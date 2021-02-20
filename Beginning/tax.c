#include <stdio.h>

int main()

{
    float i, tax;

    printf ("Enter your Income : ");
    scanf ("%f", &i);

    if ( i <= 50000) tax = 0;
    
    else if ( i <= 60000) tax = (i - 50000) * 0.1;
  
    else if ( i <= 120000) tax = (i * 60000) * 0.2 + 1000;

    else tax = (i - 120000) * 0.3 + 13000;

    printf ("Tax is : %f", tax);

    return 0;

}