#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;

int main(void){

int numero;

cout << "Ingrese un numero:" << endl;
cin >> numero;
cout << "\n" << endl;

if (numero % 2 == 0){
    cout << numero << " es un numero par" << endl;
}
else
{
    cout << numero << " es un numero impar" << endl;
}
system("PAUSE");
return 0;
}