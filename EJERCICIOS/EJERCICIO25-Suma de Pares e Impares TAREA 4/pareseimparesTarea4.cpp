#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int pares=0;
    int impares=0;

for (int i = 1; i <=10; i++)
{
 if (i % 2 == 1)
 {
      impares=impares+i;
 }
 else {
     pares=pares+i;
 }
 cout  << i << " ";
}

cout << endl;
cout << "TOTAL PARES    "  << pares;
cout << endl;
cout << "TOTAL IMPARES  " << impares;
cout << endl;
cout << endl;

    return 0;
}