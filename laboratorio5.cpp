#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(void)
{
    int opcion; //Variable que se ocupara para realizar el menu
    int a, b, residuo; //Variables para el case 1 (Ejercicio#1)
    int h, m, s; // Variables para el case 2 (Ejercicio#2)
    int anio; //Variable para el case 3 (Ejercicio#3)
    int dia, mes, ANIO, dia2, mes2, ANIO2; //Variables para el case 4 (Ejercicio#4)

    cout << "\tSeleccione un ejercicio" << endl; //Esto se le muestra al usuario al ejecutar el programa
    cout << "1. Ejercicio#1" << endl; 
    cout << "2. Ejercicio#2" << endl;
    cout << "3. Ejercicio#3" << endl;
    cout << "4. Ejercicio#4" << endl;
    cout << "Opcion:" << endl;
    cin >> opcion;

    switch (opcion)//La estructura del menu
    {
    case 1: //En el case 1 se realiza el MCD de dos numeros enteros (Ejercicio #1)
        cout << "\n" << endl;
        cout << "MCD de dos numeros enteros." << endl;
        cout << "ingrese el primer numero:" << endl;//Se le pide al usuario que ingrese un numero entero
        cin >> a;
        cout << "Ingrese el segundo numero:" << endl;//Se le pide al usuario que ingrese un segundo numero entero
        cin >> b;

        do //Se aplica la condicional
        {
            residuo = a % b;
            if(residuo != 0)
            {
                a = b;
                b = residuo;
            }
        } 
        while (residuo != 0);
        cout << "El MCD es:" << b << endl;

        
    break;
    case 2: //En el case 2 se pide al usuario que ingrese una hora (en modo 24 horas) con minutos y segundos y se muestra en la pantalla la hora un segundo despues (Ejercicio#2)
        cout << "\n" << endl;
        cout << "Hora (modo 24 horas)" << endl;
        cout << "Introduzca la hora:" << endl; //Se le pide al usuario que ingrese una hora.
        cin >> h;
        cout << "Introduzca los minutos:" << endl; //Se le pide al usuario que ingrese los minutos.
        cin >> m;
        cout << "Introduza los segundos:" << endl; //Se le pide al usuario que ingrese los segundos.
        cin >> s;

        if (h >= 0 && h <= 23 && m >= 0 && m <= 59 && s >= 0 && s <= 59) //Se aplican las condiciones.
        {
            s++;
            if (s == 60)
            {
                s = 00;
                m++;
                if (m == 60)
                {
                    m = 00;
                    h++;
                    if (h == 24)
                    {
                        h = 00;
                    }
                }
            }
           if (h >= 0 && h <= 11)
           {
               cout << "La hora es:" << h << ":" << m << ":" << s << " AM" << endl; //Se despliega cuando la hora esta en el rango "AM"
           }
           else
           {
               cout << "La hora es:" << h << ":" << m << ":" << s << " PM" << endl; //Se despliega cuando la hora esta en el rango "PM"
           }
        }
    break;
    case 3:
        cout << "\n" << endl;
        cout << "Saber si un anio es bisiesto o no" << endl;
        cout << "Ingrese un anio:" << endl; //Se pide al usuario que ingrese un año
        cin >> anio;
        cout << "\n" << endl;

        if (anio % 4 != 0 || (anio % 400 != 0 && anio % 100 == 0)) //Se aplican las condiciones para que un anio sea bisiesto
        {
            cout << "El anio introducido no es un anio bisiesto" << endl; //Mensaje que se le da al usuario si el anio introducido no es un anio bisiesto
        }
        else 
        {
            cout << "El anio introducido si es un anio bisiesto" << endl; //Mensaje que se le da al usuario si el anio introducido si es un anio bisiesto
        }
    break;
    case 4: //Programa en el que el usuario ingresa una fecha y se lo despliega en la pantalla un dia despues
        cout << "\n" << endl;
        cout << "Fecha" << endl;
        cout << "Ingrese un dia" << endl; //Se le pide al usuario que ingrese un dia.
        cin >> dia;
        cout << "Ingrese un mes" << endl; //Se le pide al usuario que ingrese un mes.
        cin >> mes;
        cout << "Ingrese un anio" << endl; //Se le pide al usuario que ingrese un año.
        cin >> ANIO;

        if ((dia == 30 && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) || (dia == 29 && mes == 2) || (dia == 28 && mes == 2 && ((ANIO % 4 != 0) || (ANIO % 100) == 0) && (ANIO % 400) != 0) || dia == 31) //Se colocan las condicionales sobre los meses que terminan en 30 y 31 y sobre los años bisiestos
        {
            mes2 = mes + 1; //Si es el ultimo dia del mes
            dia2 = 1;
        }
        else
        {
            dia2 = dia + 1; //Si es un dia normal del mes
            mes2 = mes;
        }

        if (dia2 == 1 && mes2 == 13) //Cuando es el ultimo dia del año y pasa a ser un nuevo año
        {
            mes2 = 1;
            ANIO2 = ANIO + 1;
        }
        else
        {
            ANIO2 = ANIO;
        }
        cout << "La fecha es:" << dia2 << "/" << mes2 << "/" << ANIO2 << endl; //Se despliega en la pantalla la fecha final.  
    break;
    }
    return 0;
}