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
        cout << "***********" << endl
             << endl;
        cout << "***************" << endl;
        cout << " MENU DE JUEGO " << endl;
        cout << "**************" << endl
             << endl;
        cout << "SELECCIONE UN JUEGO: " << endl;
        cout << "1- STARSHIP" << endl;
        cout << "2-SNAKE" << endl;
        cout << "0-SALIR" << endl;
        cout << "INGRESE LA OPCION PARA JUGAR:" << endl;
        cin >> opcion;

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
        }

        if (opcion==0)
        {
            break;
        } else
        {
            cout << "INGRESE UNA OPCION VALIDA" << endl << endl;
        }
        
        


        return 0;
    }
}