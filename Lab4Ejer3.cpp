#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;

int main(void){

int numero;

cout << "Ingrese el numero:" << endl;
cin >> numero;
cout << "\n" << endl;

if (numero > 0){
    cout << numero << " es positivo" << endl;
}

else if (numero < 0){
    cout << numero << " es negativo" << endl;
}

else if (numero == 0){
    cout << numero << " es igual a 0" << endl;
}
system("PAUSE");
return 0;

}