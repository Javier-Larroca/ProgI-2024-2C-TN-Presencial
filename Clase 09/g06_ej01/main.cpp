/*
Hacerunafunción llamada EsPar que determine si un número es par o no. La función debe recibir un número entero por valor y devolver true si es par o false si no lo es. La función no debe mostrar nada por pantalla.

Hacer un programa para ingresar un número y, utilizando EsPar, emita luego un cartel indicando si el número ingresado es par o no es par.
*/

#include <iostream>
using namespace std;

bool esPar(int nro)
{
    if(nro % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

//    return nro % 2 == 0;
}

int main()
{
    int nro;
//    bool resultado;

    cout << "Ingrese un numero: ";
    cin >> nro;

//    resultado = esPar(nro);
    //    if(resultado)
    if(esPar(nro))
        {
            cout << "El numero es par" << endl;
        }
        else
        {
            cout << "El numero no es par" << endl;
        }

    return 0;
}
