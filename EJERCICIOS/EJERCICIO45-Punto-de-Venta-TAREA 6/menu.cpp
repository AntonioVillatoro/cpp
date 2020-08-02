
#include <iostream>
using namespace std;

extern void productos(int opcion);
extern void imprimirFactura ();

void menu()
{
    int opcion = 0;

    while (true)
    {
        system("cls");
        cout << "****";
        cout << "MENU";
        cout << "****";

        cout << endl;
        cout << endl;
        cout << endl;

        cout << "1-BEBIDAS CALIENTES" << endl;
        cout << "2-BEBIDAS FRIAS" << endl;
        cout << "3-REPOSTERIA" << endl;
         cout << "4-IMPRIMIR FACTURAS" << endl;
        cout << "0-SALIR" << endl;

        cout << "INGRESE UNA OPCION:  " << endl;

        cin >> opcion;

        if (opcion == 0)
        {
            break;
        }



        

         if (opcion==4)
         {
           imprimirFactura ();

         } else {
             productos(opcion);
         }
        
    }
}