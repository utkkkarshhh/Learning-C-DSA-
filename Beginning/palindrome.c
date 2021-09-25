#include <stdio.h>

int main ()
{
    int num, rnum =0, temp, digit;
    printf("Enter an integer: ");
    scanf("%d", &num);
    temp = num;
    // Reverse the number
    do 
    {
        digit = temp % 10;
        temp = temp / 10;
        rnum = rnum * 10 + digit;
    }
    while ( temp > 0);

    if (rnum == num)
    {
        printf("The number is a palindrome");
    }
    else {
        printf("The number is not a palindrome");
    }
    
    
}