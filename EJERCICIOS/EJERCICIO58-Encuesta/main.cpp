#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{


    string alumnos [3]= {0,0,0};
    string encuesta [3][2]=
    {
        {"LLEVARA CLASES EL SIGUIENTE PERIODO? ", ""},
        {"MATRICULARA L2?", ""},
        {"MATRICULARA L2 CON EL LIC. BILY FERNANDEZ", ""},
    };

    int respuestas [3];


    cout << "CONTESTE LA ENCUESTA CON S O N " << endl << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "INGRESE SU NOMBRE: ";
        cin >> alumnos [i];
    for (int j = 0; i < 3; i++)
    {
        cout << encuesta [j][0] << ": ";
        cin >> encuesta [j][1];
        if (encuesta [j] [1]== "s")
        {
            respuesta [j]++;
        }
    }
    
    cout << endl;

    }
    
    cout << "RESUMEN" << endl;
    cout << "RESPUESTA PREGUNTA 1" << respuesta [0] << endl;
    cout << "RESPUESTA PREGUNTA 2" << respuesta [1] << endl;
    cout << "RESPUESTA PREGUNTA 3" << respuesta [2] << endl;


    return 0;
}
