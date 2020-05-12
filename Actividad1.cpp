#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

int main()

{

    float N1, N2, N3, P;
    string N;

    cout << "Ingrese su Nombre" << endl;
    getline(cin, N);
    cout << "\n" << endl;
    cout << "Ingrese el primer numero" << endl;
    cin >> N1;
    cout << "\n" << endl;
    cout << "Ingrese el segundo numero" << endl;
    cin >> N2;
    cout << "\n" << endl; 
    cout << "Ingrese el tercer numero" << endl;
    cin >> N3;
    cout << "\n" << endl;
    P = (N1 + N2 + N3) / 3;
    cout << N << endl;
    cout << "\n" << endl;
    cout << "Promedio obtenido:" << P << endl;

    return 0;


}