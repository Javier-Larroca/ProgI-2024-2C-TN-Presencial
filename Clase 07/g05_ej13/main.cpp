/*
Se dispone de una lista de 10 grupos de n�meros y cada uno de los grupos estar� compuesto por 5 n�meros. Se pide determinar e informar:

a) Para cada uno de los 10 grupos el promedio de los n�meros que lo componen. Se informa un resultado para cada uno de los 10 grupos.

b) Determinar e informar el valor m�nimo de todos los grupos, indicando en cu�l grupo se encontr� y su posici�n relativa en el mismo. Se informan 3 resultados al final de todo.

c) Indicar cu�l de los 10 grupos tiene el mayor de los promedios y cu�l es ese valor promedio. Se informan 2 resultados al final de todo.

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
