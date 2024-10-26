#include <iostream>

using namespace std;

/*
    2) Leer 10 números y guardarlos en un vector. Calcular el promedio y luego
    mostrar por pantalla los valores que son mayores al promedio.
*/

// Prototipos de Funcion
float calcularPromedio(int v[], int TAM);
void cargarVector(int v[], int TAM);

int main()
{
    const int TAMANIO = 5;
    int vec[TAMANIO];

    // FUNCION PARA CARGAR VECTOR
    cargarVector(vec, TAMANIO);

    // PROMEDIO
    float promedio;

    promedio = calcularPromedio(vec, TAMANIO); // Llamamos Funcion

    // MOSTRAMOS PROMEDIO

    cout << "El Promedio es: " << promedio << endl << endl;

    // MOSTRAR MAYORES AL PROMEDIO
    for(int i = 0; i < TAMANIO; i++)
    {
        if(vec[i] > promedio){
            cout << vec[i] << endl;
        }
    }

    return 0;
}

float calcularPromedio(int v[], int TAM){

    int suma = 0;

    // RECORRER VECTOR

    for(int i = 0; i < TAM; i++)
    {
        suma += v[i];
    }

    return suma / TAM;
}

void cargarVector(int v[], int TAM)
{
    // CARGA VECTOR
    for(int x = 0; x < TAM; x++){
        cout << "Ingrese un numero: ";
        cin >> v[x];
    }
}
