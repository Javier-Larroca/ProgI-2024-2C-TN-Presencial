/*
    Basado en los 2 ejercicios anteriores, hacer un programa para
    ingresar por teclado la longitud de los tres lados de un
    triángulo y luego listar qué tipo de triángulo es:

    - Equilátero: si los tres lados son iguales.
    - Isósceles: si dos de los tres lados son iguales.
    - Escaleno: si los tres lados son distintos entre sí.

*/

#include <iostream>
using namespace std;

int main()
{
    //Declaraciones
    int l1, l2, l3;

    //Ingresos
    cout<<"Ingrese el numero 1: ";
    cin>>l1;
    cout<<"Ingrese el numero 2: ";
    cin>>l2;
    cout<<"Ingrese el numero 3: ";
    cin>>l3;

    cout<<endl;
    //Condicionales
    if (l1==l2 && l2==l3)
    {
        cout<<"El triangulo es Equilátero" << endl;
    }
    else
    {
        if (l1!=l2 && l2!=l3 && l1!=l3)
        {
            cout<<"El triangulo es Escaleno";
        }
        else
        {
            cout<<"El triangulo es Isósceles";
        }
    }
    cout<<endl;

    return 0;
}
