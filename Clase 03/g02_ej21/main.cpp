/*
    Una marroquinería dispone de 45 carteras blancas, 50 carteras negras, 40
    marrones y 49 grises.

    Se pide hacer un programa donde se ingresen tres ventas.
    Cada venta está compuesta por:

        - Cantidad de carteras
        - Tipo de cartera (1- Blanco, 2- Negro, 3- Marrón, 4- Gris)

    Calcular e informar:

        - Cantidad total de carteras vendidas en total.
        - Cuántas carteras quedaron de cada tipo.
        - Los colores de carteras que no se vendieron.

    NOTA: Ninguna venta superará las 10 carteras.
*/

#include <iostream>
using namespace std;

int main()
{
    int contBlanco = 0;
    int contNegro = 0;
    int contMarron = 0;
    int contGris = 0;

    int cantCarteras;
    int colorCartera;

    cout << "Ingrese la cantidad de carteras: ";
    cin >> cantCarteras;

    cout << "Ingrese el color de la cartera (1, 2, 3, 4): ";
    cin >> colorCartera;

//    if(colorCartera == 1)
//    {
//        contBlanco++;
//    }
//
//    if(colorCartera == 2)
//    {
//        contNegro++;
//    }
//
//    if(colorCartera == 3)
//    {
//        contMarron++;
//    }
//
//    if(colorCartera == 4)
//    {
//        contGris++;
//    }

    switch(colorCartera)
    {
    case 1:
        contBlanco++;
        break;
    case 2:
        contNegro++;
        break;
    case 3:
        contMarron++;
        break;
    case 4:
        contGris++;
        break;
    default:
        cout << "Código incorrecto" << endl;
    }

    return 0;
}


//Ejercicio utilizado para explicar switch/condicional multiple.
