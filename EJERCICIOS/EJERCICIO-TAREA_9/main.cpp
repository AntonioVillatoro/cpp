#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    //INICIALIZAMOS RANDOM

    srand (time(NULL));
    int primerDado=0;
    int segundoDado=0;
    char respuesta='s';

while (respuesta== 'S' || respuesta== 's')
{
     //GENERAMOS LOS DADOS DEL 1 AL 6
    cout << "BIENVENIDO A JUGAR DADOS" << endl;
    cout << "SUERTE!" << endl;
    cout << "DESEA JUGAR DADOS: S/N" << endl;
    cin >> respuesta;


    if (respuesta=='n' || respuesta== 'N')
    {
        break;
    }
     
   
    
    primerDado= rand ()%6+1;
    segundoDado= rand ()%6+1;

    //JUGAMOS
    cout << endl << endl;
    cout << "PRIMER DADO : " << primerDado << endl;
    cout << "SEGUNDO DADO:  " << segundoDado << endl;
    cout << endl << endl;

  
}
cout << endl;
cout << "SALIO DE JUGAR DADOS" << endl;

    return 0;
}
