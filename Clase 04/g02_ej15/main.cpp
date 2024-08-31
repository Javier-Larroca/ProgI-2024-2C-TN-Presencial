#include <iostream>
using namespace std;

/*
 Un a�o es bisiesto si es m�ltiplo de 4, exceptuando a los a�os que son
 m�ltiplos de 100 pero que no sean m�ltiplos de 400. Esto �ltimo significa que el
 a�o 1900 no es bisiesto, pero el a�o 2000 s� lo es. Hacer un programa para
 ingresar un a�o y listar por pantalla si es bisiesto o no lo es.

 Ejemplo A. Si se ingresa el a�o 2020 se indicar� como bisiesto.
 Ejemplo B. Si se ingresa el a�o 2019 se indicar� como no bisiesto.
 Ejemplo C. Si se ingresa el a�o 1800 o 1900 se indicar� como no bisiesto.
 Ejemplo D. Si se ingresa el a�o 1600 o 2000 se indicar� como bisiesto.
*/

int main()
{
    //Declaraci�n de variables
    int anio;

    cout<<"Ingrese un a�o para saber \nsi el mismo es bisiesto o no:";
    cin>>anio;
    cout<<endl;
//
//    if(anio%4==0)
//    {
//        if(anio%100==0)
//        {
//            if(anio%400==0)
//            {
//                cout<<"E� a�o ingresado es bisiesto";
//            }
//            else
//            {
//                cout<<"El a�o ingresado no es bisiesto.";
//            }
//        }
//        else
//        {
//            cout<<"E� a�o ingresado es bisiesto";
//        }
//    }
//    else
//    {
//        cout<<"El a�o ingresado no es bisiesto.";
//    }

    if(anio%4==0 && (anio%100!=0 || anio%400==0))
    {
        cout<<"E� a�o ingresado es bisiesto";
    }
    else
    {
        cout<<"El a�o ingresado no es bisiesto.";
    }


    cout<<endl;
    return 0;
}
