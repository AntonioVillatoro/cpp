#include <iostream>
using namespace std;

string nombreCompleto (string nombre, string apellido)
{
    return nombre + "  " + apellido;

}

int main(int argc, char const *argv[])
{

string primernombre= "";
string  primerapellido="";



    cout << "INGRESE SU PRIMERO NOMBRE: ";
    cin >> primernombre;
    cout << "INGRESE SU SU PRIMER APELLIDO: ";
    cin >> primerapellido;

    cout << endl;

    cout << "NOMBRE COMPLETO:  " << nombreCompleto (primernombre , primerapellido);
    cout << endl;


    return 0;
}
