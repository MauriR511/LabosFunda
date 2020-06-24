#include<iostream>
#include<conio.h>
using namespace std;
int arreglo [] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49,
51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97, 99};

int main(void)
{
    int i;

    cout << "Se mostraran en pantalla los numeros impares del 1-100 en forma descendente:" << endl;
    for (i = 49; i >= 0; i--)
    {
        cout << arreglo[i] << endl;
    }
    
    system("PAUSE");
    return 0;
}