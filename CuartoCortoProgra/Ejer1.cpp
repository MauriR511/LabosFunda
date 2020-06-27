#include <iostream>
using namespace std;

char mensaje[100]; //Creamos un arreglo donde se depositara la palabra o frase introducida
int letra(char mensaje[100]); //Nombramos la funcion que utilizaremos

int main ()
{
    cout << "Ingrese la palabra que desea codificar:" << endl; //Se le pide al usuario que ingrese la palabra o frase
    cin.getline(mensaje, 100);

    letra(mensaje); //Se manda a llamar la funcion

    system("PAUSE");
    return 0;
}

int letra(char mensaje[100]) //Funcion que codificara la palabra o frase introducida utilizando la clave del murcielago
{
    int i;

    for ( i = 0; i <= 100; i++)
    {
        switch(mensaje[i])
        {
            case 'm':
                mensaje[i] = 48;
                break;
            case 'u':
                mensaje[i] = 49;
                break;
            case 'r':
                mensaje[i] = 50;
                break;
            case 'c':
                mensaje[i] = 51;
                break;
            case 'i':
                mensaje[i] = 52;
                break;
            case 'e':
                mensaje[i] = 53;
                break;
            case 'l':
                mensaje[i] = 54;
                break;
            case 'a':
                mensaje[i] = 55;
                break;
            case 'g':
                mensaje[i] = 56;
                break;
            case 'o':
                mensaje[i] = 57;
                break;
            
            default:
            mensaje[i] = mensaje[i];
        }
    }
    cout << "La palabra codificada es: " << mensaje << endl;
}