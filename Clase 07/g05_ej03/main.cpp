#include <iostream>

using namespace std;

/*
    Hacer un programa para ingresar una lista de números que finaliza cuando se
    ingresa un cero y luego informar el porcentaje de números primos y el
    porcentaje de números no primos.

    Se informan 2 resultados al final.




*/


int main()
{
    int x;
    int numero;
    int divisores = 0;
    int primos = 0;
    int no_primos = 0;
    int porcentaje_primos;
    int porcentaje_no_primos;
    int numeros_totales;

    cout<<"Ingrese la cantidad de numeros que desee:";
    cin>> numero;
    cout<< endl;

    while ( numero!=0 )
    {

        divisores = 0;
        //primos = 0;
        //no_primos = 0;

        for ( x=1 ; x<=numero ; x++)
        {

            if( numero % x == 0 )
            {

                divisores++;
            }
        }

        if ( divisores == 2 )
        {

            primos++;
        }
        else
        {

            no_primos++;
        }

        numeros_totales = primos + no_primos;

        porcentaje_primos = primos * 100 / numeros_totales;

        porcentaje_no_primos = no_primos * 100 / numeros_totales;

        cin>> numero;

    }

    cout<<"El porcentaje de numeros primos es " << porcentaje_primos <<"%";
    cout<< endl;
    cout<<"El porcentaje de numeros no primos es " << porcentaje_no_primos <<"%";
    cout<< endl;
    cout<< endl;
    cout<< endl;

//ANDA RARO

    return 0;
}
