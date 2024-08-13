/*
    Hacer un programa para ingresar por teclado la cantidad de horas trabajadas
     por un operario y el valor que se le paga por hora trabajada y listar por pantalla
     el sueldo que le corresponda.
*/

#include <iostream>
using namespace std;

int main()
{
    // Declaracion de variables
    int hora;
    float valorHora;
    float resultado;

    // Pedimos la cantidad de horas
    cout<<"Ingrese cantidad de horas: ";
    cin>> hora;

    // Otro comentario
    cout<<"Ingre el valor de la hora: ";
    cin>> valorHora;

    resultado = hora * valorHora;
    cout<<"El resultado de la multiplicacion es: " << resultado << endl;

    cout<<endl;


    return 0;
}
