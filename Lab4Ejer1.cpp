#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;

int main(void){

int numerador, denominador;

cout << "Ingrese el numerador:" << endl;
cin >> numerador;
cout << "\n" << endl;
cout << "Ingrese el denominador:" << endl;
cin >> denominador;
cout << "\n" << endl;

if (numerador % denominador == 0) {
cout << denominador << " es divisor con " << numerador << endl;
}
else
{
cout << denominador << " no es divisor con " << numerador << endl;
}
system("PAUSE");
return 0;

}