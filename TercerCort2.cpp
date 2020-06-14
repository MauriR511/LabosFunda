#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <string.h>
using namespace std;

int main(void) { //El siguiente programa trata de que el usuario adivine un numero entre 1 y 100

int x, numero=0, num;
int intentos = 5;
srand((unsigned)time(NULL)); //Genera un numero aleatorio
x = 1 + rand() % 100;

cout << "Juguemos a adivinar un numero" << endl;
cout << "\n" << endl;
cout << "Estoy pensando en un numero entre el 1 y el 100" << endl;
cout << "Tienes 5 intentos" << endl;
cout << "Si ya no quiere jugar, digite el numero 101" << endl;
while (numero == 0) 
{
    cout << "Ingrese un numero:" << endl; //Se le pide al usuario que digite un numero
    cin >> num;
    if (num >= 1 && num <= 100){

        if(num > x)
        {
            cout << "El numero es menor" << endl; //Pistas que se le dan al usuario si el numero digitado es menor al que genero el programa
        }
        else if (num < x)
        {
            cout << "El numero es mayor" << endl; //Pistas que se le dan al usuario si el numero digitado es mayor al que genero el programa
        }
        else
        {
            cout << "Has adivinado el numero" << endl; //Mensaje que se le da al usuario si adivino el numero
            numero = 1;
        }
    }   
intentos--; //Aqui se pone el numero de intentos que le van quedando al usuario
if (intentos == 4 && num != x && num != 101){ //Se coloca que el intento es igual a 4 pero es diferente que el numero generado por la maquina y diferente que el 101.
    cout << "Le quedan 4 intentos" << endl;
}
else if (intentos == 3 && num != x && num != 101){ //Se coloca que el intento es igual a 3 pero es diferente que el numero generado por la maquina y diferente que el 101.
    cout << "Le quedan 3 intentos" << endl;
}
else if (intentos == 2 && num != x && num != 101){ //Se coloca que el intento es igual a 2 pero es diferente que el numero generado por la maquina y diferente que el 101.
    cout << "Le quedan 2 intentos" << endl;
}
else if (intentos == 1 && num != x && num != 101){ //Se coloca que el intento es igual a 1 pero es diferente que el numero generado por la maquina y diferente que el 101.
    cout << "Le queda un intento" << endl;
}
else if (intentos == 0 && num != x){ // Se coloca que el usuario se quedo sin intentos.
    cout << "Ya no le quedan intentos" << endl;
    cout << "Gracias por participar" << endl;
    numero = 1;
}
if (num == 101){ // Con el numero 101 el usuario puede dejar de jugar.
    cout << "Gracias por jugar" << endl;
    return 0;
}

}
system("PAUSE");
return 0;

}