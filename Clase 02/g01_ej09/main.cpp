#include <iostream>
using namespace std;

/* 9 - Hacer un programa para ingresar por teclado una cantidad de minutos y
 mostrar por pantalla a cuantas horas y minutos equivalen.*/

int main()
{
    int minutos, horas, minutosRestante;

    cout << "Ingrese la cantidad de minutos: ";
    cin >> minutos;

    horas = minutos / 60;
    minutos = minutos % 60;
    //minutosRestante = minutos % 60;

    cout << endl << "Horas: "<< horas;
    cout << endl << "Minutos: "<< minutos;
    //cout << endl << "Minutos: "<< minutosRestante;

    return 0;
}
