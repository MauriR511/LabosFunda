#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main(void){

char palabra[20];
cout << "inserte una palabra" << endl;
cin >> palabra;
int num = strlen(palabra);

if(palabra[0] == palabra[num - 1]){
    cout << "La palabra inicia y termina con la misma letra" << endl;
}
else
{
    cout << "La palabra no termina con la misma letra" << endl;
}
system("PAUSE");
return 0;

}