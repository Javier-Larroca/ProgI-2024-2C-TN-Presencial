/*
Leer 10 números y guardarlos en un vector. Determinar e informar cuál es el
 valor máximo y su posición dentro del vector.
*/

#include <iostream>
using namespace std;

int main()
{
    const int TAM = 5;
//    int nro;
    int vNros[TAM];
    int maximo;
    int posicion;

    // Cargamos el vector
    for(int i = 0; i < TAM; i++)
    {
        cout << "Ingrese un numero: ";
//        cin >> nro;
//        vNros[i] = nro;
        cin >> vNros[i];
    }

    maximo = vNros[0];
//    posicion = 1;
    posicion = 0;

    for(int i = 0; i < TAM; i++)
    {
        if(vNros[i] > maximo)
        {
            maximo = vNros[i];
//            posicion = i + 1;
            posicion = i;
        }
    }

    cout << "El maximo de los numeros fue " << maximo << endl;
//    cout << "La posicion es " << posicion << endl;
    cout << "La posicion es " << posicion + 1 << endl;



    return 0;
}
