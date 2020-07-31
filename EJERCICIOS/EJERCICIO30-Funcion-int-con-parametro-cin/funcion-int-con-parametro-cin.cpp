#include <iostream>
using namespace std;

int sumar (int a, int b){
    return a+b;
}

int restar (int a, int b){
    return a-b;
}


int main(int argc, char const *argv[])
{
    int numero1=0;
    int numero2=0;

    system ("cls");

    cout << "INGRESE EL VALOR DE A: " ;
    cin >> numero1;
    cout << "INGRESE EL VALOR DE B: ";
    cin >> numero2;

    cout << endl;
    cout << "EL RESULTADO DE LA SUMA ES:  " << sumar (numero1,numero2);
    cout << endl;
    cout << "EL RESULTADO DE LA RESTA ES: " << restar (numero1, numero2);
    cout << endl;
    cout << endl;

    return 0;
}
