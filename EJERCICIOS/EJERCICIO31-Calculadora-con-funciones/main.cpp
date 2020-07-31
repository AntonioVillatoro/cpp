#include <iostream>
using namespace std;

int sumar (int a, int b)
{
    return a+b;
}

int calculadora (int a, int b, char operador){
    if (operador== '+'){
        return sumar (a, b);
    }
    return -1;

}

int main(int argc, char const *argv[])
{
    int num1=0;
    int num2=0;
    char operador;



    cout << "INGRESE A: ";
    cin >> num1;
    cout << "INGRESE B:  ";
    cin >> num2;
    cout << "INGRESE EL OPERADOR ( + , - , *, /) ";
    cin >> operador;
    cout << endl;
    cout << "RESULTADO DE " << num1 << operador << num2 << "ES: ";
    cout << calculadora(num1, num2, operador);


    return 0;
}
