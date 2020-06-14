#include <iostream>
#include <math.h>
#include <string.h>
#include <stdio.h>
using namespace std;

int main (void){ //El siguiente programa calcula salarios de los empleados de una empresa

float trabajadas, extras, total, real, descuento; //Todas las variables que se utilizaran en el programa

cout << "Ingrese sus horas trabajadas" << endl; //Se le pedira al usuario que ingrese sus horas trabajadas y sus horas extras
cin >> trabajadas;
cout << "\n" << endl;
cout << "Ingrese sus horas extras" << endl;
cin >> extras;
cout << "\n" << endl;

total = (trabajadas * 1.75) + (extras * 2.50); //Se calcula su salario total y se lo muestra al usuario
cout << "Su salario total es de ($):" << total << endl;

if (total > 500){ //Se aplica la condicion del descuento para salarios menores y mayores de 500
    descuento = (0.04 + 0.0625 + 0.1);
}
else{
    descuento = (0.04 + 0.0625);
}

real = (total - (total * descuento)); //Se muestra el salario real, aplicando los descuentos
cout << "Su salario real es de ($):" << real << endl;

system("PAUSE");
return 0;


}