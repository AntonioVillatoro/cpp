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
    throw "EL OPERADOR NO EXISTE";

}

int main(int argc, char const *argv[])
{
    int num1=0;
    int num2=0;
    int resultado=0;
    char operador;



    cout << "INGRESE A: ";
    cin >> num1;
    cout << "INGRESE B:  ";
    cin >> num2;
    cout << "INGRESE EL OPERADOR ( + , - , *, /) ";
    cin >> operador;
    cout << endl;


try
{
resultado = calculadora (num1, num2, operador);
cout << "RESULTADO DE " << num1 << " " << operador << " " << num2 << "ES: ";
cout << resultado;
}
catch(const char* error)
{
    cout << error;
}

    return 0;
}
