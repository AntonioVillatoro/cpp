#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string nombre [3][2];

    nombre [0][0] ="JUAN" ;
    nombre [0][1]="PEREZ";

    nombre [1][0]="MARIA";
    nombre [1][1]="MARTINEZ";

    nombre [2][0]="PEDRO";
    nombre [2][1]="JIMENEZ";

    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 2; j++)
       {
          cout << nombre [i][j] << " "; 
       }
       cout << endl;
    }
    


    return 0;
}
