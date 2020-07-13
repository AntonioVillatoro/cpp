#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    
 //DATOS DE ENTRADA
    double subtotal=0;
    double total=0;
    double impuesto=0.15;
    double impuestoexento=0;
    int descuento=0;
    double calculodescuento=0;
    double calculoimpuestoexenta=0;
    double calcucloimpuestogravado= 0;
    char estaexenta= 'S';


    cout << endl << endl;
    cout << "INGRESE EL SUBTOTAL DE LA FACTURA:   ";
    cin >> subtotal;
    cout << "INGRESE EL DESCUENTO (O, 10, 15, 20):     ";
    cin >> descuento;
    cout << "ES FACTURA EXENTA? S/N   ";
    cin >> estaexenta;
    cout << endl << endl;

    
    // EXENTA O GRAVADA

    if (estaexenta =='S' || estaexenta == 's')
    {
    calculodescuento=(subtotal*descuento) /100;
    calculoimpuestoexenta=(subtotal-calculodescuento)*impuestoexento;
    total= subtotal-calculodescuento+calculoimpuestoexenta;
    }else
    {
    calculodescuento=(subtotal*descuento) /100;
    calcucloimpuestogravado=(subtotal-calculodescuento)*impuesto;
    total= subtotal-calculodescuento+calcucloimpuestogravado;
    }
    



    //SALIDA 

    cout << endl;
    cout << "TOTAL A PAGAR ES:  " << total;
    cout << endl;
    cout << endl;


    return 0;
}