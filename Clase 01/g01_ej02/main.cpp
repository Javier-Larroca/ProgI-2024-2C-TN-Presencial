/*
    Unaconcesionaria deautos paga a los vendedores un sueldo fijo de $5000 más
     $700 de premio por cada auto vendido. Hacer un programa que permita
     ingresar por teclado la cantidad de autos vendidos por un vendedor y luego
     informar por pantalla el sueldo total a pagar.
     Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a
     pagar es de $7800.
*/

#include <iostream>

using namespace std;

int main()
{
    const float SUELDO_FIJO = 5000;
    const float PREMIO = 700;

    int cantAutos;
    float sueldoTotal;

    // Ingreso
    cout << "Ingrese la cantidad de autos vendidos: ";
    cin >> cantAutos;

    // Proceso
    sueldoTotal = SUELDO_FIJO + PREMIO * cantAutos;

    // Salida
    cout << "El sueldo a pagar es $" << sueldoTotal << endl;

    return 0;
}
