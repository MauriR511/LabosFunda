#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){

char palabra[30];
int longitud=0;
cout << "ingrese una palabra" << endl;
cin >> palabra;
longitud = mstrlen(palabra);

if(longitud > 10){
    cout << "La palabra ingresada es mayor a 10 caracteres" << endl;
}
else if(longitud >= 10)
{
    cout << "La palabra ingresada tiene 10 caracteres" << endl;
}
else
{
    cout << "La palabra ingresada es menor a 10 caracteres" << endl;
}

if(longitud % 2 == 0){
    cout << "La longitud es par" << endl;
}
  else
  {
      cout << "La longitud es impar" << endl;
  }
system("PAUSE");
return 0;
    
    
}