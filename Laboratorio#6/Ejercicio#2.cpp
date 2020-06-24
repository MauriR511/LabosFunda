#include <iostream>

using namespace std;

int main()
{
    int a[100], i, n, x, num;
    int v = 0;

    cout << "Cuantos elementos quiere introducir:" << endl;
    cin >> n;
    cout << "Digite los elementos del arreglo:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    cout << "Cual numero desea saber si se repite en el arreglo:" << endl;
    cin >> x;

    for(i = 0; i < n; i++)
    {
        if(x == a[i])
        {
            v++;
            num = a[i];
        }
    }

    cout << "El numero " << num << " se repite " << v << " veces" << endl;

    system("PAUSE");
    return 0;
}