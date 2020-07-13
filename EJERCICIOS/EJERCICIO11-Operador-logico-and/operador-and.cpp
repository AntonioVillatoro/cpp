#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a=5;
    int b=10;
    int c=7;


//&& A(MPERSON)

    if (a > b && a > c)
    {
        cout << "A es el mayor   " << a;
        cout << endl;
    } 
    if (b > a && b > c)
    {
       cout << "B es el mayor  " << b;
       cout << endl;
    }
     if (c > a && c> b)
     {
       cout << "C es el mayor " << c;
       cout << endl;
       } 

    return 0;
}
