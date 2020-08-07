#include <iostream>
#include "calculadora.h"
#include "alumnos.h"
using namespace std;


int main(int argc, char const *argv[])
{
    cout << endl;
    cout << calcular (5, 7, '-');
    cout << endl;
    cout << endl;

    cout << obtenernombreCompleto ();
    cout << endl;
    cout << obtenerEdad () << endl;;


    return 0;
}

