#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[])
{
//iINICIALIZAMOS RADOM
srand (time(NULL));

//INCIALIZAMOS BIDEMENSIONAL
int numeros [5][5];
int numeroRadom=0;


for (int i = 0; i < 5; i++)
{

    for (int j = 0; i < 5; i++)
    {
        
        numeros [i][j]= rand ()%10+1;
        cout << numeros [i][j] <<  "  " << endl;
    }
    
    cout << endl;
}




    return 0;
}
