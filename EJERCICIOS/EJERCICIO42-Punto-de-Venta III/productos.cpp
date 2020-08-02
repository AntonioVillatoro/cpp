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
            cin >> opcionProducto;

            switch (opcionProducto)
            {
            case 1:
                agregarProductos("CAPUCCINO", 1, 40);
                break;
            case 2:
                agregarProductos("EXPRESSO", 1, 30);
                break;

            default:
                cout << "OPCION NO VALIDA";
                break;
            }
        

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