#include <iostream>
using namespace std;

// PROGRAMA CALCULADORA

 int main(int argc, char const *argv[])
 {

     // DECLARANDO LAS VARIABLES
     int a=0;
     int b=0;
     int resultadosuma=0;
     int resultadoresta=0;
     int resultadomultiplicacion=0;
     int resultadodivision=0;

     // INGRESANDO DATOS
     cout <<"INGRESE EL VALOR DE A:   " ;
     cin >> a;
     cout << endl;
     cout <<"INGRESE EL VALOR DE B:   " ;
     cin >> b;
     cout << endl;
     
    // PROCESO

    resultadosuma= a+b;
    resultadoresta= a-b;
    resultadomultiplicacion= a*b;
    resultadodivision= a/b;

     // RESULTADO

    cout << "LA SUMA DE A + B = " << resultadosuma;
    cout << endl;
    cout << "LA SUMA DE A - B = " << resultadoresta;
    cout << endl;
    cout << "LA SUMA DE A * B = " << resultadomultiplicacion;
    cout << endl;
    cout << "LA SUMA DE A / B = " << resultadodivision;
    cout << endl;
    cout << endl;

     return 0;
 }
 