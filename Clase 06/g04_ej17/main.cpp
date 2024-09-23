#include <iostream>
using namespace std;

/*
     17. Hacer un programa para ingresar una lista de números que finaliza cuando se
     ingresan dos números positivos consecutivos, y luego informar el máximo.
     Cuando se ingresa el segundo número positivo consecutivo el mismo debe ser
     descartado.
     Ejemplo A: 5,-10, 20,-8, 0, 13,-35,-8, 15, 10. Se listará Máximo 20.
     En este caso, el segundo número positivo consecutivo, el 10, no se analiza, sólo
     sirve para finalizar el ingreso.
     Ejemplo B: 5,-10, 20,-20, 0, 55,-13, 45,-8,-5, 12, 120. Se listará Máximo 55.
     En este caso, el segundo número positivo consecutivo, el 120, no se analiza,
     sólo sirve para finalizar el ingreso.
*/

int main()
{

    int n;
    int nAnt;
    int contP;
    int maximo;

    cout << "Ingrese numero: ";
    cin >> n;
    maximo=n;
    nAnt = -1;

    // OPCION 1
    while(n<0 || nAnt<0)
    {
        nAnt = n;

        if(n>maximo)
        {
            maximo=n;
        }

        cout << "Ingrese numero: ";
        cin >> n;
    }


    // OPCION 2
    cout << "Ingrese numero: ";
    cin >> n;
    contP=0;
    if(n>0)
    {
        contP++;
    }
    maximo = n;

    while(contP<2)
    //while(contP!=2)
    {
        if(n>maximo)
        {
            maximo=n;
        }
        cout << "Ingrese numero: ";
        cin >> n;
        if(n>0)
        {
            contP++;
        }
        else
        {
            contP=0;
        }
    }

    return 0;
}
