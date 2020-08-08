#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
   int numero=0;
   //INICIALIZA EL NUMERO RANDOM

   srand (time(NULL));

 // GENERE UN NUMERO ENTRE 1 Y 10



    for (int i = 0; i < 20; i++)
    {
    numero= rand ()%5+1;
    cout << "NUMERO AL AZAR: " << numero;
    cout << endl;
    }
    
  


    return 0;
}
