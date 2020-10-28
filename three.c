#include <stdio.h>

int main ()
{
  int a, b, c, largest;
  printf ("Enter three numbers: \n");
  scanf ("%d %d %d" , &a, &b, &c);
  if (a > b)
  largest = a;
  else largest = b;

  if (c > largest)
  largest = c;

  printf ("The Largest Number is : %d", largest);
  
  return 0;

}