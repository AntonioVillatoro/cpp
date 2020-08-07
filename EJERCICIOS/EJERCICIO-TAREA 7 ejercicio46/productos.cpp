#include <iostream>
#include "factura.h"
using namespace std;



void productos(int opcion)
{
    system("cls");
    int opcionProducto = 0;

    switch (opcion)
    {
    case 1:
    {

        cout << "BEBIDAS CALIENTES";
        cout << "***************";
        cout << endl;
        cout << "1-CAPUCCINO" << endl;
        cout << "2-EXPRESSO" << endl;
        cout << "INGRESE UNA OPCION:  ";
        cin >> opcionProducto;


        switch (opcionProducto)
        {
        case 1:
            agregarProductos(" 1 CAPUCCINO - L. 40.00", 1, 40);
            break;
        case 2:
            agregarProductos(" 1 EXPRESSO - L. 30.00", 1, 30);
            break;

        default:
        {
            cout << "OPCION NO VALIDA";
            return;
            break;
        }
        }

        cout << endl;
        cout << "PRODUCTO AGREGADO" << endl << endl;
        system("pause");
        break;
    }   

    case 2:
    {
        cout << "BEBIDAS FRIAS";
        cout << "***************";
        cout << endl;
        cout << "1-PINA COLADA" << endl;
        cout << "2-LIMONADA" << endl;
        cout << "3-MALTEADA CREMOSA" << endl;
        cout << "INGRESE UNA OPCION:  ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProductos(" 1 PINA COLADA - L. 25.00", 1, 25);
            break;
        case 2:
            agregarProductos(" 1 LIMONADA - L. 25.00", 1, 25);
            break;
        case 3:
            agregarProductos(" 1 MALTEADA CREMOSA - L. 75.00", 1, 75);
            break;

        default:
        {
            cout << "OPCION NO VALIDA";
            return;
            break;
        }
        }

        cout << endl;
        cout << "PRODUCTO AGREGADO" << endl << endl;
        system("pause");
        break;
    }

    case 3:
    {
        cout << "REPOSTERIA";
        cout << "**************";
        cout << endl;
        cout << "1-CHOCO FLAN" << endl;
        cout << "2-FLAN DE PINA" << endl;
        cout << "3-PIE DE LIMON" << endl;
        cout << "INGRESE UNA OPCION:  ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProductos(" 1 CHOCO FLAN - L. 45.00", 1, 45);
            break;
        case 2:
            agregarProductos(" 1 FLAN DE PINA - L. 32.00", 1, 32);
            break;
        case 3:
            agregarProductos(" 1 PIE DE LIMON - L. 20.00", 1, 20);
            break;

        default:
        {
            cout << "OPCION NO VALIDA";
            return;
            break;
        }
        }

        cout << endl;
        cout << "PRODUCTO AGREGADO" << endl << endl;
        system("pause");
        break;
    }

    default:
        break;
    }
}