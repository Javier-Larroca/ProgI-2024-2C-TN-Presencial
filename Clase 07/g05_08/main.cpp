/*
Hacer un programa para ingresar por teclado 5 grupos compuestos por números ordenados de menor a mayor. El final de cada grupo se detecta al ingresar un número menor a su anterior.

Se debe obtener y emitir:

 a) Para cada uno de los grupos la cantidad de números primos que lo
 componen. Se informa 1 resultado por cada grupo.

 b) El menor número par de cada uno de los grupos. Se informa 1 resultado por
 cada grupo.

 c) El anteúltimo y último número positivo de cada uno de los grupos. Se
 informan 2 resultados por cada grupo.
*/

#include <iostream>
using namespace std;

int main()
{
    int nro, nroAnterior, nroParMenor;

    cout << "Ingrese un nro: ";
    cin >> nro;

    for(int i = 0; i < 5; i++)
    {
        nroParMenor = 1;
        nroAnterior = nro;

        while(nro >= nroAnterior)
        {
            if(nro % 2 == 0 && (nro < nroParMenor || nroParMenor == 1))
            {
                nroParMenor = nro;
            }

            nroAnterior = nro;

            cout << "Ingrese un nro: ";
            cin >> nro;
        }

        if(nroParMenor == 1)
            cout << "No se han ingresado numeros pares" << endl;
        else
            cout << "El menor del grupo " << i + 1 << " es " << nroParMenor << endl;
    }

    return 0;
}
