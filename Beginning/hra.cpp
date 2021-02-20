#include <iostream>
#include <conio.h>
int main()
{

int bp;
float hra;

cout << "Enter Basic Pay \n";
cin >> bp;

if (bp <= 2000)
{
    hra = 200;
}

else if (bp > 2000 && bp <= 4000)
{
    hra = 350;
}

else (bp > 4000)
{
    hra = 500;
}

cout<<"HRA is:"<<hra;

return 0;

}