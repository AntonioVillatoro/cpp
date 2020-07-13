#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a= 1000;
    int b= 5000;
    int c=7000;
//LA MAQUINA OMITE LOS COMENTARIOS

/*
    cout << "INGRESE A:   ";
    cin >> a;
    cout << endl;

    cout << "INGRESE B:   ";
    cin >> b;
    cout << endl;

    cout << "INGRESE c:   ";
    cin >> c;
    cout << endl;
*/

if (a > b){
       if (a > c) {
cout << "A es el mayor    ";
cout << endl;
} else {
cout << "C es el mayor     ";
cout << endl;

}
} else
if (b > c){
    cout << "B es el mayor:   ";
    cout << endl;
    } else {
        cout << "C es el mayor   ";
        cout << endl;


    }

    return 0;
}
