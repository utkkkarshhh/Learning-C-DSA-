#include <stdio.h>

int main()

{

    int days, month, year;

    printf("Enter Month & Year \n");
    scanf ("%d %d", &month, &year);
    switch(month)
{
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
              days = 31;
              break;
              
    case 4:
    case 6:
    case 9:
    case 11:
              days = 30;
              break;


    case 2:
            if (year % 4 == 0)
            printf("It was a Leap Year: %d days", days);

            else 
            days =28;
            break;
}

printf("Number of days are: %d", days);

return 0;

}