#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;

int main(){

float P, C, T; 
string N;

cout << "Ingrese nombre del producto:" << endl;
getline(cin, N);
cout << "\n" << endl;
cout << "Ingrese el precio del producto:" << endl;
cin >> P;
cout << "\n" << endl;
cout << "Ingrese la cantidad comprada:" << endl;
cin >> C;
cout << "\n" << endl;
cout << N << endl;
cout << "El producto tuvo un coste de:" << P << endl;
cout << "Se compraron:" << C << endl;
cout << "\n" << endl;
T = P*C;
cout << "\n" << endl;
cout << "Total de dinero gastado:" << T << endl;
return 0;
} 