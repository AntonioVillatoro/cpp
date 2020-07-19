#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
int opcion=0;

while (true){

    cout << "****" << endl;
    cout << "MENU" << endl;
    cout << "****" << endl;

    cout << endl;

    cout << "1-CAFE Y GRANITAS" << endl;
    cout << "2-REPOSTERIA" << endl;
    cout << "0-SALIR" << endl;

    cout << "INGRESE UNA OPCION DE MENU" << endl;
    cin >> opcion; 

    if (opcion==1){
        system ("cls");
        cout << "ESTAS EN EL MENU DE CAFE Y GRANITAS" << endl;
        system ("pause");
    }

    if (opcion==2){
        system ("cls");
        cout << "ESTAS EN EL MENU DE REPOSTERIA" << endl;
        system ("pause");
    }

    if (opcion==0){
        break;
        //ESTE BREAK ROMPE EL CICLO
    }


}
    return 0;
}
