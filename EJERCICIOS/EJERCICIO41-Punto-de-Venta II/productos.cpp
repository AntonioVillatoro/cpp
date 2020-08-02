#include <iostream>
using namespace std;

void productos (int opcion)
{
system ("cls");
switch (opcion)
{
case 1:
{
    cout << "BEBIDAS CALIENTES";
    cout << "***************";
    system ("pause");
    break;
}

case 2:
{
    cout << "BEBIDAS FRIAS";
    cout << "***************";
    system ("pause");
    break;
}

case 3:
{
    cout << "REPOSTERIA";
    cout << "**************";
    system ("pause");
    break;
}

default:
    break;
}




}