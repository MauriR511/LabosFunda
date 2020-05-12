#include <iostream>
#include <cmath>
using namespace std;
main(){

float r, pi = 3.14, p, a;
cout << "Introduce el valor de radio" << endl;
cin >> r;
a = pow (r,2) * pi;
p = 2 * pi * r;
cout << "El area del circulo es de:" << a << endl;
cout << "El perimetro del circulo es de:" << p << endl;
return 0;



}