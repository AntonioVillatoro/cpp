#include <iostream>
using namespace std;

int numeroSecreto=7;

void adivinarNumeroSecreto(int miNumero)
{

    if (miNumero== numeroSecreto)
    {
        cout << "ADIVINASTE EL NUMERO" << endl;
    }
    else
    {
        {
            cout << "INTENTO FALLIDO CON " << miNumero << endl;
            int otroNumero=0;
            cout << "INGRESE OTRO NUMERO: ";
            cin >> otroNumero;
            adivinarNumeroSecreto(otroNumero);
        }
    }


}



int main(int argc, char const *argv[])
{
    adivinarNumeroSecreto(5);

    return 0;
}
