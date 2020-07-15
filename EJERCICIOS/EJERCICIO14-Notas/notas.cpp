#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

 int nota=0;
 cout << "INGRESE LA NOTA QUE OBTUVO:    ";
 cin >> nota;

if (nota >= 95 && nota <= 100){
     cout << "OBTUVISTE UNA A";
     cout << endl;   
} else {
    if (nota >= 85 && nota <= 94){
     cout << "OBTUVISTE UNA B"; 
     cout << endl;  
    } else {
        if (nota >= 75 && nota <= 84){
        cout << "OBTUVISTE UNA C";
        cout << endl;   
        } else {
            if (nota >= 65 && nota <= 74){
            cout << "OBTUVISTE UNA D"; 
            cout << endl;  
            } else {
                if (nota >= 60 && nota <= 64){
                cout << "OBTUVISTE UNA E";
                cout << endl;   
                } else {
                    if (nota >= 0 && nota < 60){
                    cout << "OBTUVISTE UNA F"; 
                    cout << endl;  
                        } else {
                        cout << "INGRESE UNA NOTA DE 0-100";
                        cout << endl;
                        } 
                    }
                } 
           }     
        }
    }

    return 0;
}
