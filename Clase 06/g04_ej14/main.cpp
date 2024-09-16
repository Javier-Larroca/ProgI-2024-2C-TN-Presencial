#include <iostream>

using namespace std;


/*
    14) Hacer un programa para ingresar una lista de números que finaliza cuando se
     ingresa un cero, informar si todos están ordenados en forma creciente. En caso
     de haber dos números “empatados” considerarlos como crecientes.
     Por ejemplo si la lista fuera:
     Ejemplo 1:-10, 1, 5, 7, 15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto Ordenado”
     Ejemplo 2: 10, 10, 15, 20, 25, 25, 28, 33, 0 se emitirá un cartel: “Conjunto
     Ordenado”
     Ejemplo 3: 10, 1, 15, 7,-15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto No
     Ordenado”
*/

int main()
{

    int n, nAnt;
    bool band = true;

    int contNum = 0, contOrd = 0;

    cout << "Ingrese numero: ";
    cin >> n;
    nAnt = n;
    while(n!=0) {

        // Opcion 1
        /*if(n>=nAnt){
            nAnt = n;
        }
        else{
            band=false;
        } */

        // Opcion 2
        /*if(n<nAnt)
            band=false;

        nAnt = n;*/

        // Opcion 3
        if(n>=nAnt){
            contOrd++;
            nAnt=n;
        }

        contNum++;

        cout << "Ingrese numero: ";
        cin >> n;
    }

    /*if(band){
        cout << "Conjunto Ordenado" << endl;
    }
    else{
        cout << "Conjunto Desordenado" << endl;
    }*/

    if(contNum==contOrd){
        cout << "Conjunto Ordenado" << endl;
    }
    else{
        cout << "Conjunto Desordenado" << endl;
    }

    return 0;
}
