#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(){

float a, b, c, x1, x2, m;
cout << "Introduzca el valor de a:" << endl;
cin >> a;
cout << "\n" << endl;
cout << "Introduzca el valor de b:" << endl;
cin >> b;
cout << "\n" << endl;
cout << "Introduzca el valor de c:" << endl;
cin >> c;
cout << "\n" << endl;
m = (b*b)-(4*a*c);
x1 = ((-b) + (sqrt (m)))/2*a;
x2 = ((-b) - (sqrt (m)))/2*a;
cout << "El valor de x1 es:" << x1 << endl;
cout << "El valor de x2 es:" << x2 << endl;
return 0;

}