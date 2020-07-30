#include <iostream>
using namespace std;

int sumar ()
{ 
    return 5+7;
}

string nombreCompleto ()
{
    string nombre="DAVID";
    string apellido= "BENITEZ";
    return nombre + " " + apellido;
}

int main(int argc, char const *argv[])
{
  //FUNCIONES SON SEGMENTOS DE CODIGOS


string nombreyApellido = nombreCompleto ();


int resultado=sumar();
cout  << resultado;
cout << endl;
cout << endl;

cout << nombreyApellido;
cout << endl;



    return 0;
}
