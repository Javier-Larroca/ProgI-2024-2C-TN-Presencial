/*
 Hacer una función llamada Redondear que reciba como parámetro un número float y devuelva un número entero con el redondeo del mismo.

 Por ejemplo:
 Si recibe 7.78, debe devolver 8.
 Si recibe 7.48, debe devolver 7.
 Si recibe 7.5, debe devolver 8.

 Hacer un programa para ingresar un número y, utilizando Redondear, emita luego un cartel indicando el número redondeado.
*/

#include <iostream>
using namespace std;

/// DECLARACION -> .h
int redondear(float nro);

int main()
{
    float nro;
    int redondeado;

    cout << "Ingrese un numero: ";
    cin >> nro;

    redondeado = redondear(nro);

    cout << "El numero redondeado es " << redondeado << endl;

    return 0;
}

/// DEFINICION -> .cpp
int redondear(float nro)
{
    int sinDecimal = (int)nro;
    float decimal = nro - sinDecimal;

//    cout << "Decimal: " << decimal << endl;

    if(decimal >= 0.50f)
    {
        sinDecimal = sinDecimal + 1;
    }

    return sinDecimal;
}

