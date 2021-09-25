#include <stdio.h>

int main ()
{
    int basic, hra;
    printf("Enter basic pay: \n");
    scanf("%d", &basic);
    if( basic <= 2000){
        hra = 200;
    }
    else if ( basic > 2000 && basic <=4000){
        hra = 350;
    }
    else {
        hra = 500;
    }
    printf("Your HRA is: %d", hra);
}