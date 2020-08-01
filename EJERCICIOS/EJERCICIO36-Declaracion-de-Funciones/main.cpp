#include <iostream>
using namespace std;

int numero=0;
int sumar (int a, int b);



int main(int argc, char const *argv[])
{
   numero=7;
   cout <<  sumar (5,7);
   cout << endl;
   cout << numero;
   cout << endl;


    return 0;
}

int sumar (int a, int b){
    numero=5;
    return a+b;
}