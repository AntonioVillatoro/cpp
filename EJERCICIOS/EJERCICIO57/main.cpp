#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    

    string nombre [3][2]=
{
   {"JUAN" , "PEREZ"},
   {"MARIA", "MARTINEZ"},
   {"PEDRO", "JIMENEZ"},

};

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
