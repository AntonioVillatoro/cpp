#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{

    int opcion = 0;

    while (true)
    {
        system("cls");
        cout << "***********" << endl;
        cout << " BIENVENIDO " << endl;
        cout << "***********" << endl;
        cout << "***************" << endl;
        cout << " MENU DE JUEGO " << endl;
        cout << "**************" << endl;
        cout << "SELECCIONE UN JUEGO: " << endl;
        cout << "1- STARSHIP" << endl;
        cout << "2-SNAKE" << endl;
        cout << "0-SALIR" << endl;
        cout << "INGRESE LA OPCION PARA JUGAR:" << endl;
        cin >> opcion;

        if (opcion >= 3)
        {
            cout << "ERROR! INGRESE UNA OPCION VALIDA:  0 - 1 - 2 :  ";
            cin >> opcion;
        }

        if (opcion == 0)
        {
        break;
        }

        switch (opcion)
        {
        case 1:
            system("cls");
            starShip();
            break;
        case 2:
            system("cls");
            snake();
            break;
        default:
        break;

            return 0;
        }
    }
}