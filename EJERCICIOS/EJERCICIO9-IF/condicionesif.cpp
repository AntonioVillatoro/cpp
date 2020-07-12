#include <iostream>
using namespace std;
 
int main(int argc, char const *argv[])
{
int numerosecreto=7;
int numero= 0;

cout << "INGRESE UN NUMERO:   ";
cin >> numero;


if (numero== numerosecreto)
{
    cout << "ADIVINASTE EL NUMERO SECRETO:    " << numero;
    cout << endl;
} else
    {
    cout << "NO ADIVINASTE EL NUMERO SECRETO:  ";
    cout << endl << endl;
    }
    

    return 0;

}