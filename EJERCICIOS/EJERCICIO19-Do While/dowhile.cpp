#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a=2;
    int b=10;

    while (a > b) {
        cout << " (While) A > B" << endl;
        break;
    }

    do{
        cout << " (Do While) A > B" << endl;    
        break;

    } while (a>b);


    return 0;
}
