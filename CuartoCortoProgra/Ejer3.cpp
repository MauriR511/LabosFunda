#include <iostream>
#include <stdlib.h>
using namespace std;

double notas(int n);//Nombramos la funcion notas
float promedio(float nota1, float nota2, float nota3, float nota4, float nota5);//Nombramos la funcion promedio

int main ()//Programa en el que el usuario ingresara el numero de estudiantes con su 5 notas y este le dira su media y si aprobo o no
{
    int n;
    float nota1, nota2, nota3, nota4, nota5;

    cout << "Ingrese la cantidad de estudiantes" << endl;
    cin >> n;
    notas(n);//Llamamos a la funcion notas
    
    system("PAUSE");
    return 0;
}

double notas(int n)//Funcion donde el usuario ingresara las notas y se calculara el nota final, ademas de decirle si aprobo o no
{
    int i;
    float nota1, nota2, nota3, nota4, nota5, final;

    for (i = 0; i < n; i++)
    {
        cout << "Notas del estudiante " << i + 1 << "." << endl;
        cout << "Ingrese la Nota 1." << endl;
        cin >> nota1;
        cout << "Ingrese la Nota 2." << endl;
        cin >> nota2;
        cout << "Ingrese la Nota 3." << endl;
        cin >> nota3;
        cout << "Ingrese la Nota 4." << endl;
        cin >> nota4;
        cout << "Ingrese la Nota 5." << endl;
        cin >> nota5;

        final = promedio(nota1, nota2, nota3, nota4, nota5);

        if (final >= 6)
        {
            cout << "El alumno aprobo con una media de: " << final << endl;
        }
        else
        {
            cout << "El alumno reprobo con una media de: " << final << endl;
        }
        
    }
}
float promedio(float nota1, float nota2, float nota3, float nota4, float nota5)//Funcion que calculara el promedio
{
    float prom;
    
    prom = (nota1 * 0.20 + nota2 * 0.20 + nota3 * 0.20 + nota4 * 0.20 + nota5 * 0.20);

    return (prom);
}