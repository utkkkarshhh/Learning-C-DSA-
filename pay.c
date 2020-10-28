#include <stdio.h>

int main()
{
    int bp, hra;
    printf ("Enter your Basic Pay:");
    scanf ("%d", &bp);
    if (bp<=2000) hra=200;
    if (bp>2000 && bp <=4000) hra=350;
    if (bp>4000) hra=500;

    printf ("HRA is:%d \n", hra);

    return 0;

}