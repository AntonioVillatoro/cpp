#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    for (int i = 0; i < 10; i++)
    {
        cout << i << " ";
    }

   cout << endl;

   


    for (int i = 9; i >= 0; i--)
    {
        cout << i << " ";
    }

    cout << endl;



     for (int i = 0; i < 100; i++)
    {
        cout << i << " ";
        if (i==55)
        {
            break;
        }
    }

    cout << endl;  
    


        for (int i = 0; i < 100; i++)
     { 
       
        if (i==65 || i==66)
        {
            continue;
        }
         cout << i << " ";
        

    }

    return 0;
}
