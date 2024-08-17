#include <iostream>
using namespace std;

/*
 1 - Hacer un programa para ingresar por teclado un número y luego emitir por
 pantalla un cartel aclaratorio indicando si el mismo es positivo, negativo o cero.
*/

//Resolución 1:
/*
int main()
{
    int n;

    cout << "Ingrese un numero: ";
    cin >> n;

    if(n>0)
    {
        cout << "El Numero " << n << " es Positivo." << endl;
    }
    else if(n==0)
    {
        cout << "El Numero " << n << " es Cero." << endl;
    }
    else
    {
        cout << "El Numero " << n << " es Negativo." << endl;
    }
    return 0;
}
*/

//Resolución 2
int main()
{
    int n;

    cout << "Ingrese un numero: ";
    cin >> n;

    if(n>0)
    {
        cout << "El Numero es Positivo." << endl;
    }
    else
    {
        if(n<0)
        {
            cout << "El Numero es Negativo." << endl;
        }
        else
        {
            cout << "El Numero es Cero." << endl;
        }
    }

    return 0;
}
