#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{


    while (true)
    {
        int opcion = 0;
        system ("cls");

        cout << "SISTEMA DE INVENTARIO";
        cout << "***********************";
        cout << endl << endl;
        cout << "1-PRODUCTOS" << endl;
        cout << "2-INGRESO DE INVENTARIO" << endl;
        cout << "3-SALIDA DE INVENTARIO" << endl;
        cout << "0-SALIR" << endl;
        cout << "INGRESE UNA OPCION DEL MENU:  ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
        {
            cout << "ESCOGISTE 1";
            cout << endl;
            break;
        }
        case 2:
        {
            cout << "ESCOGISTE 2";
            cout << endl;
            break;
        }
        case 3:
        {
        cout << "ESCOGISTE 3";
        cout << endl;
        break;
        }
        default:
            break;

        }
         
         system ("pause");
         cout << endl;
        

        if (opcion==0)
        {
            break;
        }
    }

    return 0;
}
