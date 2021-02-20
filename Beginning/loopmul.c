#include <stdio.h>

int main ()
{
    int i, mul ;

    printf ("Enter a number a find its multiples: \n");
    scanf ("%d", &mul);

    for (i = 1; i <= 10; i++)

    printf ("%d\n", mul * i);

    return 0;

}