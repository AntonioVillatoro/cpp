#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
 int a=10;
 int b=12;
 int c=7;

// &&   AND (Y)  || OR (O)
cout << endl << endl;

if (a > 8 && b >8 && c > 8)
{
    cout << "TODOS LOS NUMEROS SON MAYORES QUE 8";
    cout << endl;
}

if (a > 8 || b > 8 || c > 8)
{
cout << "ALGUN NUMERO ES MAYOR QUE 8";
cout << endl << endl;
}


    return 0;
}
