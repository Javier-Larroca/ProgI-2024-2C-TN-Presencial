/*
    Hacerun programa para ingresar por teclado tres n�meros e informar con una
    leyenda aclaratoria si los tres son todos distintos entre s�, caso contrario no
    emitir nada.

    Tener en cuenta: Si A es distinto de B y B es distinto de C, eso no significa que A
    y Cseandistintos.

    Ejemplo: A=8, B=6 y C=8.
*/

#include <iostream>
using namespace std;

int main()
{   // TILDES
    setlocale(LC_ALL, "spanish");


    //DECLARACION DE VARIABLES
    int a, b, c;

    cout << "Ingrese tres n�meros: " << endl;
    cin >> a >> b >> c;

    if(a != b && b!= c && a != c)
    {
        cout << "Los tres n�meros son distintos" << endl;
    }

    return 0;
}
