#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    //DATOS DE ENTRADA
    double subtotal=0;
    double total=0;
    double impuesto=0.15;
    cout << endl << endl;
    cout << "INGRESE EL SUBTOTAL DE LA FACTURA:   ";
    cin >> subtotal;

    //PROCESO
    total= subtotal + (subtotal*impuesto);

    //SALIDA 

    cout << endl;
    cout << "TOTAL A PAGAR ES:  " << total;
    cout << endl;
    cout << endl;
    
    return 0;
}
