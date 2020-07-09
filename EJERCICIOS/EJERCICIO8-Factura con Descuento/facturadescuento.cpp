#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    
 //DATOS DE ENTRADA
    double subtotal=0;
    double total=0;
    double impuesto=0.15;
    int descuento=0;
    double calculodescuento=0;
    double calculoimpuesto=0;


    cout << endl << endl;
    cout << "INGRESE EL SUBTOTAL DE LA FACTURA:   ";
    cin >> subtotal;
    cout << "INGRESE EL DESCUENTO (O, 10, 15, 20):     ";
    cin >> descuento;
    cout << endl << endl;



    //PROCESO
    calculodescuento=(subtotal*descuento) /100;
    calculoimpuesto=(subtotal-calculodescuento)*impuesto;
    total= subtotal-calculodescuento+calculoimpuesto;


    //SALIDA 

    cout << endl;
    cout << "TOTAL A PAGAR ES:  " << total;
    cout << endl;
    cout << endl;







    return 0;
}
