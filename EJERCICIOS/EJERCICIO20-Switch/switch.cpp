#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int opcion=0;

    cout << "INGRESE UNA OPCION" << endl;
    cin >> opcion;


switch (opcion)
{
case 1: 
{
    // PARA ESCRIBIR VARIAS LINEA EN CASE 1, 2, 3 ... 
    cout << "ESCOGISTE 1" << endl;
    cout << "SEGUNDA LINEA" << endl;
    break;
}
case 2:
     cout << "ESCOGISTE 2" << endl;
     break;
case 3:
     cout << "ESCOGISTE 3" << endl;
     break;
default:
    cout << "INGRESE UNA OPCIONE ENTRE 1 Y 3" << endl;
    break;
}

    return 0;
}
