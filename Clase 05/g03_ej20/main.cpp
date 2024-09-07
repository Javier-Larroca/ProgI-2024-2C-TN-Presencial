/*
Se define a un n�mero entero como primo cuando tiene solamente
dos divisores.

Ejemplo A: 2, 7, 11, 13 son n�meros primos,ya que todos tienen solamente
dos divisores.

Ejemplo B: 6 no es primo, pues tiene 4 divisores (1, 2, 3 y 6)
Ejemplo C: 9 no es primo, pues tiene 3 divisores (1, 3 y 9)

Hacer un programa para ingresar un n�mero y luego informar con un cartel
aclaratorio si el mismo es un n�mero primo o es n�mero no primo
*/

#include <iostream>
using namespace std;

int main()
{

    int nro;
    int contDivisores = 0;

    cout << "Ingreses un numero: ";
    cin >> nro;

    for(int i = 1; i <= nro; i++)
    {

        if(nro % i == 0)
        {
            contDivisores++;
        }
    }

    if(contDivisores == 2)
    {
        cout << "El numero " << nro << " es primo" << endl;
    }
    else
    {
        cout << "El numero " << nro << " no es primo" << endl;
    }

    return 0;
}
