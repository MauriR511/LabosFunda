#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iomanip>
using namespace std;

//Estructura del arreglo
const int longCad = 20;
struct costoPorArticulo{
    char nombreArticul[longCad + 1];
    int cantidad;
    float precio;
    float costoPorArticulo;
}
Articulos[100]; //Arreglo

//Aqui se definimos las funciones 
void recopilacion (int c);
float costo (int c);
void estructura (int c);
float costo_total(int c);

//Funcion main
int main ()
{
    int c;

    cout << "Bienvenido, por favor ingrese la cantidad de productos que ha comprado" << endl;
    cin >> c;

    recopilacion (c);
    costo (c);
    estructura (c);
    costo_total (c);

    cout << "El costo total de su compra es de: " << "$" << costo_total << endl;

    return 0;
}

//Funcion donde se manda a pedir los datos que el cliente tiene que ingresar
void recopilacion (int c)
{
    int i;

    for (i = 0; i < c; i++)
    {
        cout << "\n" << endl;
        cout << "Producto " << i + 1 << endl;
        cout << "Ingrese el nombre de su producto:" << endl;
        cin >> Articulos[i].nombreArticul;
        cout << "Ingrese la cantidad que compro del producto:" << endl;
        cin >> Articulos[i].cantidad;
        cout << "Ingrese el precio del producto ($):" << endl;
        cin >> Articulos[i].precio;
        cout << "\n" << endl;
    }
}

//Funcion donde se calcula el tosto total por producto
float costo (int c)
{
    int i;

    for (i = 0; i < c; i++)
    {
        Articulos[i].costoPorArticulo = Articulos[i].precio * Articulos[i].cantidad;
    }
}
//Funcion donde se desplega el arreglo
void estructura (int c)
{
    int i;

    for (i = 0; i < c; i++)
    {
        cout << "Producto: " << Articulos[i].nombreArticul << endl;
        cout << "Cantidad comprada: " << Articulos[i].cantidad << endl;
        cout << "Precio del producto: " << "$" << Articulos[i].precio << endl;
        cout << "Costo total: " << "$" << Articulos[i].costoPorArticulo << endl;
        cout << "\n" << endl;
    }
}

//Funcion donde se calcula el costo total de la compra
float costo_total(int c)
{
    int i;
    float suma = 0;

    for (i = 0; i < c; i++)
    {
        suma += Articulos[i].costoPorArticulo;
    }

    cout << "El costo total de su compra es de: " << "$" << suma << endl;

    system("PAUSE");
}
   



