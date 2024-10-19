
/// Hacer una funci�n que reciba un n�mero entero por valor llamado d�a y un
/// string llamado nombre por referencia y le asigne el nombre correspondiente seg�n el n�mero de d�a. Siendo 0 - Domingo y 6 - S�bado


#include <iostream>
using namespace std;

void asignarNombreDia(int dia, string &nombre);

int main()
{

    int nro;
    string dia;


    cout << "Ingrese un numero: ";
    cin >> nro;

//    cout << "Valor del dia antes de la funcion: " << dia << endl;
    asignarNombreDia(nro, dia);
//    cout << "Valor del dia despues de la funcion: " << dia << endl;

    cout << "El dia de la semana es " << dia << endl

    return 0;
}

void asignarNombreDia(int dia, string &nombre)
{
    switch(dia)
    {
    case 0:
        nombre = "Domingo";
        break;
    case 1:
        nombre = "Lunes";
        break;
    case 2:
        nombre = "Martes";
        break;
    case 3:
        nombre = "Miercoles";
        break;
    case 4:
        nombre = "Jueves";
        break;
    case 5:
        nombre = "Viernes";
        break;
    case 6:
        nombre = "Sabado";
        break;
    default:
        nombre = "Numero incorrecto";
        break;
    }
}
