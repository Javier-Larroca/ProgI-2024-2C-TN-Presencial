#include <iostream>

using namespace std;

/*
    12) Dada una lista de 10 números, cargarlos en un vector. Luego ingresar un
        número e informar la cantidad de veces que ese número aparece en el vector.
*/

void cargarVector(int v[], int TAM);
int cantRepetidos(int v[], int TAM, int n);

int main()
{
    const int TAMANIO = 10;
    int vec[TAMANIO];

    cargarVector(vec, TAMANIO);

    int nro;

    cout << "---------------------" << endl;
    cout << "Ingrese un numero a buscar amigo: ";
    cin >> nro;

    //int cantidad;

    //cantidad = cantRepetidos(vec, TAMANIO, nro);

    //cout << "Cant. de veces que se repite: " << cantidad << endl;
    cout << "Cant. de veces que se repite: " << cantRepetidos(vec, TAMANIO, nro)<< endl;

    return 0;
}

void cargarVector(int v[], int TAM)
{
    // CARGA VECTOR
    for(int x = 0; x < TAM; x++){
        cout << "Ingrese un numero: ";
        cin >> v[x];
    }
}

int cantRepetidos(int v[], int TAM, int n){

    int cont = 0;

    for(int i = 0; i < TAM; i++)
    {
        if(v[i] == n){
            cont++;
        }
    }

    return cont;
}
