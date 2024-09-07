
///Hacer un programa para ingresar una lista de 10 n�meros, luego informar el
///m�ximo y el m�nimo.
///Ejemplo A: 10, 20,-5, 30,-15, 5, 42, 0, 22,-13. Se listar� M�ximo 42 M�nimo-15.
///Ejemplo B: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13. Se listar� M�ximo 42 M�nimo 5.
///Ejemplo C:-10,-20,-5,-30,-15,-12,-42,-8,-22,-13. Se listar� M�ximo-5 M�nimo-42.
///Observe que los tres ejemplos dejan en claro que la suposici�n de que el
///m�ximo �seguramente� es un positivo y el m�nimo �seguramente� es un
///negativo, queda totalmente descartada

/*

-10
-20
-5
-30
-15
-12
-42
-8
-22
-13
*/

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    // Variables
    int nro;
    int nroMax;
    int nroMin;

    for(int i = 0; i < 10; i++)
    {
        cout << "Ingrese un n�mero: ";
        cin >> nro;

        if(i == 0)// Asignamos el primer valor
        {
            nroMax = nro;
            nroMin = nro;
        }

        if(nro > nroMax)
        {
            nroMax = nro;
        }
        else if(nro < nroMin)
        {
            nroMin = nro;
        }
    }
    cout << endl;
    cout << "EL n�mero m�ximo es: " << nroMax << endl;
    cout << "El n�mero m�nimo  es: " << nroMin << endl;

    return 0;
}
