#include <stdio.h>

int main ()
{
    char name[10];
    printf("What is your name? ");
    scanf("%c", &name);
    printf("Hello, %c How are you?\n", name);
}