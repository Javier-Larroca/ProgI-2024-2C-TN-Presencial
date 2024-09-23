/*
Se dispone de una lista de 10 grupos de números y cada uno de los grupos estará compuesto por 5 números. Se pide determinar e informar:

a) Para cada uno de los 10 grupos el promedio de los números que lo componen. Se informa un resultado para cada uno de los 10 grupos.

b) Determinar e informar el valor mínimo de todos los grupos, indicando en cuál grupo se encontró y su posición relativa en el mismo. Se informan 3 resultados al final de todo.

c) Indicar cuál de los 10 grupos tiene el mayor de los promedios y cuál es ese valor promedio. Se informan 2 resultados al final de todo.

*/

#include <iostream>
using namespace std;

int main()
{
    //bool esPrimerMenor = true;
    int nro, nroMenor, grupoMenor, posMenor;

    for( int i = 0; i < 3; i++)
    {
        cout << "GRUPO " << i  + 1<< endl;

        for( int j = 0; j < 5; j++)
        {
            cout << "Ingrese un nro: ";
            cin >> nro;

          //  if(esPrimerMenor)
            if(i == 0 && j == 0)
            {
                nroMenor = nro;
                grupoMenor = i + 1;
                posMenor = j + 1;
                //esPrimerMenor = false;
            }
            else if(nro < nroMenor)
            {
                nroMenor = nro;
                grupoMenor = i;
                posMenor = j + 1;
            }

        }

        cout << "------------" << endl;
    }

    // PUNTO B
    cout << "El nro menor de todos los grupos es " << nroMenor << endl;
    cout << "En la posicion " << posMenor << endl;
    cout << "En el grupo " << grupoMenor << endl;

    return 0;
}
