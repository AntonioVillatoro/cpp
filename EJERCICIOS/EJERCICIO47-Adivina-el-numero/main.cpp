#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int numeroSecreto=0;
    int miNumero=0;

    srand (time(NULL));

//GENERAR UN NUMERO ENTRE 1 Y 10

numeroSecreto=rand ()%10+1;

do
{
    cout << "ADIVINA EL NUMERO (1 A 10):  ";
    cin >> miNumero;

    if (numeroSecreto < miNumero){
        cout << "EL NUMERO SECRETO PUEDE SER MENOR";
        cout << endl;
    }
    else
    {
        if (numeroSecreto > miNumero){
            cout << "EL NUMERO SECRETO PUEDE SER MAYOR" << endl;
        }
    }

} while (numeroSecreto != miNumero);

    cout << "ADIVINIASTE EL NUMERO";
    cout << endl;
    return 0;
}
