#include <iostream>
#include <string>
using namespace std;

string productos[5][3] =
{
        {"001", "IPHONE X", "0"},
        {"002", "LAPTOP DELL", "5"},
        {"003", "MONITOR SAMSUNG", "2"},
        {"004", "MOUSE", "100"},
        {"005", "HEADSET", "25"},

};


void listarProductos()
{
    system("cls");
    cout << endl;
    cout << "LISTADO DE PRODUCTOS" << endl;
    cout << "CODIGO,  DESCRIPCION, EXISTENCIA" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << productos[i][0] << " | " << productos[i][1] << " | "  << productos[i][2] << endl;
    }

}

void movimientoInventario(string codigo, int cantidad, string tipomovimiento)
{
    for (int i = 0; i < 5; i++)
    {
        if (productos[i][0] == codigo)
        {
            if (tipomovimiento == "+")
            {
                productos[i][2] = to_string (stoi(productos[i][2]) + cantidad);
            }
            else
            {
                productos[i][2] = to_string (stoi(productos[i][2]) - cantidad);
            }
        }
    }
}

void ingresoDeInventario()
{
    string codigo = "";
    int cantidad = 0;
    system("cls");
    cout << endl;
    cout << "INGRESO DE PRODUCTOS AL INVENTARIO" << endl;
    cout << "INGRESE EL CODIGO DEL PRODUCTOS:   ";
    cin >> codigo;
    cout << endl;
    cout << "INGRESE LA CANTIDAD DEL PRODUCTO:    ";
    cin >> cantidad;
    movimientoInventario(codigo, cantidad, "+");
}


void salidaDeInventario()
{
    string codigo = "";
    int cantidad = 0;
    system("cls");
    cout << endl;
    cout << "SALIDA DE PRODUCTOS DEL INVENTARIO" << endl;
    cout << "INGRESE EL CODIGO DEL PRODUCTOS:   ";
    cin >> codigo;
    cout << endl;
    cout << "INGRESE LA CANTIDAD DEL PRODUCTO:    ";
    cin >> cantidad;
    movimientoInventario(codigo, cantidad, "-");
}


void ajusteNegativo()
{
    string codigo = "";
    int cantidad = 0;
    system("cls");
    cout << endl;
    cout << "AJUSTE NEGATIVO" << endl;
    cout << "INGRESE EL CODIGO DEL PRODUCTO:   ";
    cin >> codigo;
    cout << endl;
    cout << "INGRESE LA CANTIDAD DEL PRODUCTO:    ";
    cin >> cantidad;
    movimientoInventario(codigo, cantidad, "-");
}


void ajustePositivo()
{
    string codigo = "";
    int cantidad = 0;
    system("cls");
    cout << endl;
    cout << "AJUSTE POSITIVO" << endl;
    cout << "INGRESE EL CODIGO DEL PRODUCTO:   ";
    cin >> codigo;
    cout << endl;
    cout << "INGRESE LA CANTIDAD DEL PRODUCTO:    ";
    cin >> cantidad;
    movimientoInventario(codigo, cantidad, "+");
}





int main(int argc, char const *argv[])

{

int opcion = 0;

    while (true)
    {
        
        system("cls");
        cout << "SISTEMA DE INVENTARIO";
        cout << endl;
        cout << "***********************";
        cout << endl;
        cout << endl;
        cout << "1-PRODUCTOS" << endl;
        cout << "2-INGRESO DE INVENTARIO" << endl;
        cout << "3-SALIDA DE INVENTARIO" << endl;
        cout << "4-AJUSTE NEGATIVO" << endl;
        cout << "5-AJUSTE POSITIVO" << endl;
        cout << "0-SALIR" << endl;
        cout << "INGRESE UNA OPCION DEL MENU:  ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:

            listarProductos();
            break;
        case 2:

            ingresoDeInventario();
            break;

        case 3:

            salidaDeInventario();
            break;

        case 4:

            ajusteNegativo();
            break;

        case 5:

            ajustePositivo();
            break;

        default:
            break;
   
        }
        system("pause");
        cout << endl;

            if (opcion == 0)
            {
                break;
            }
    }
        return 0;
    
}