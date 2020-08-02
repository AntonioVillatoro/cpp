#include <iostream>
using namespace std;

extern void agregarProductos(string descripcion, int cantidad, double precio);

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
        system("pause");
        break;
    }

    case 3:
    {
        cout << "REPOSTERIA";
        cout << "**************";
        system("pause");
        break;
    }

    default:
        break;
    }
}