#include <iostream>
#include <math.h>
using namespace std;

int numero=0;
int raiz=0;


int main(int argc, char const *argv[])
{
    cout << "INGRESE UN NUMERO PARA DETERMINAR SU RAIZ CUADRADA: " ;
    cin >> numero;

    raiz= sqrt (numero);

    cout << "LA RAIZ CUADRA DEL NUMERO : " << numero << " ES: " << raiz;
    cout << endl;

    return 0;
}
