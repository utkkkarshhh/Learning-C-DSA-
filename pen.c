#include <stdio.h>

int main()
{
    int qty;
    float cost, discount;

    printf("Enter the Quantity of Pens bought:\n");
    scanf ("%d", &qty);

    if (qty > 10)
        discount = 10 / 100; 
    
    else  discount = 0;
    
    cost = qty * 125 * (1.0 - discount);

    printf ("The cost is : %8.2f\n ", cost);

    return 0;
}