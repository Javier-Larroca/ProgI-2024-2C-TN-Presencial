
///Hacer un programa para ingresar una lista de 10 números, luego informar el
///máximo y el mínimo.
///Ejemplo A: 10, 20,-5, 30,-15, 5, 42, 0, 22,-13. Se listará Máximo 42 Mínimo-15.
///Ejemplo B: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13. Se listará Máximo 42 Mínimo 5.
///Ejemplo C:-10,-20,-5,-30,-15,-12,-42,-8,-22,-13. Se listará Máximo-5 Mínimo-42.
///Observe que los tres ejemplos dejan en claro que la suposición de que el
///máximo “seguramente” es un positivo y el mínimo “seguramente” es un
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
        cout << "Ingrese un número: ";
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
    cout << "EL número máximo es: " << nroMax << endl;
    cout << "El número mínimo  es: " << nroMin << endl;

    return 0;
}
