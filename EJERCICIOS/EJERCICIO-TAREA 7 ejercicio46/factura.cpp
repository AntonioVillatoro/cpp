#include <iostream>
using namespace std;

double subtotal;
string listaProductos;
double impuestosobreventa;
double total;

void agregarProductos (string descripcion, int cantidad, double precio)
{
    listaProductos= listaProductos + descripcion + '\n';
    subtotal=subtotal+ (cantidad*precio);
    impuestosobreventa= subtotal * 0.15;
    total= subtotal+ impuestosobreventa;
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
cout << endl;
cout << "IMPUESTO SOBRE VENTA:   L. " << impuestosobreventa;
cout << endl;
cout << "TOTAL A PAGAR ES:   L. " << total;
cout << endl << endl;

system ("pause");

}