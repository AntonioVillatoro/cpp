#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
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
        cout << "1-BEBIDAS CALIENTES" << endl;
        cout << "2-BEBIDAS HELADAS" << endl;
        cout << "3-REPOSTERIA" << endl;
        cout << "0-SALIR" << endl;

        cout << "INGRESE UNA OPCION ENTRE 1-3 ";
        cin >> opcion;

        if (opcion == 0)
        {
            break;
        }

         if (opcion == 1)
        {
         system ("cls");
         cout << "*****************" << endl;
         cout << "BEBIDAS CALIENTES" << endl;
         cout << "******************" << endl;
         system ("pause");
        }

        if (opcion == 2)
        {
         system ("cls");
         cout << "**************" << endl;
         cout << "BEBIDAS HELADAS" << endl;
         cout << "***************" << endl;
         system ("pause");
        }

        if (opcion == 3)
        {
         system ("cls");
         cout << "**********" << endl;
         cout << "REPOSTERIA" << endl;
         cout << "**********" << endl;
         system ("pause");
        }

        if (opcion > 3 || opcion < 0 )
        {
        system ("cls");
        cout << "INGRESE UNA OPCION VALIDA" << endl;
        system ("pause");
        }
    }

    return 0;
}
