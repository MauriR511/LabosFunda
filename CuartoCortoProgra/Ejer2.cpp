#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void altura(int n, float a[25]);//Nombramos la funcion para altura
double Promedio(int n, float a[]);//Nombramos la funcion para la media
void Estaturas_promedio(int n, float a[]);//Nombramos la funcion sobre la relacion entre las estaturas y la media

int main ()//Programa en el que el usuario ingresara 25 estaturas y este calculara la media y dira cuantas estaturas estan arriba y abajo del promedio
{
    int n = 25;
    float a[25];
    double prom;
    cout << "Estaturas de un salon de 25 estudiantes" << endl;
    cout << "Ingrese las estaturas" << endl;
    altura(n,a);//Mandamos a llamar las fucniiones
    Promedio(n,a);//Mandamos a llamar las fucniiones
    Estaturas_promedio(n,a);//Mandamos a llamar las fucniiones
  
    system("PAUSE");
    return 0;
}

void altura(int n, float a[25])//Funcion en el que el usuario ingresara las 25 estaturas
{
    int i;

    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

double Promedio(int n, float a[])//Funcion en el que se calculara la media
{
    int i;
    double suma = 0.0, prom;

    for(i = 0; i < n; i++)
    {
        suma = suma + a[i];
        prom = suma / n;
    }
    cout << "El promedio de las estaturas es de: " << prom << endl;
}

void Estaturas_promedio(int n, float a[])//Funcion que dira cuantas estaturas estan arriba y debajo de la media
{
    int i;
    double prom;
    int arriba = 0;
    int abajo = 0;

    for (i = 0; i < n; i++)
    {
        if (a[i] > prom)
        {
            arriba++;
        }
        else
        {
            abajo++;
        }
        
    }
    cout << "Se encuentran " << arriba << " arriba de la media" << endl;
    cout << "Se encuentran " << abajo << " abajo de la media" << endl;
}
