#include <iostream>
using namespace std;

double subtotal;
string listaProductos;
double total;

void agregarProductos (string descripcion, int cantidad, double precio)
{
    listaProductos= listaProductos + descripcion + '\n';
    subtotal=subtotal+ (cantidad*precio);
}


void imprimirFactura ()
{

system ("cls");

cout << "***********" << endl;
cout << "FACTURA" << endl;
cout << "***********" << endl;
cout << endl;

cout << "PRODUCTOS: " << endl;
cout << listaProductos;
cout << endl;
cout << "SUBTOTAL:   L. " << subtotal;
cout << endl << endl;

system ("pause");

}