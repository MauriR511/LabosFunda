#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
#include <string.h>
using namespace std;

int main(void) { //El siguiente programa pedira un año y mostrara si es bisiesto o no

int a;

cout << "Ingrese un anio:" << endl; //Se pide al usuario que ingrese un año
cin >> a;
cout << "\n" << endl;

if (a % 4 != 0 || (a % 400 != 0 && a % 100 == 0)) //Se aplican las condiciones para que un anio sea bisiesto
{
    cout << "El anio introducido no es un anio bisiesto" << endl; //Mensaje que se le da al usuario si el anio introducido no es un anio bisiesto
}
else 
{
    cout << "El anio introducido si es un anio bisiesto" << endl; //Mensaje que se le da al usuario si el anio introducido si es un anio bisiesto
}

system("PAUSE");
return 0;

} 