///Dada una lista de 7 n�meros enteros informar cual es el primer, el segundo, el
///ante�ltimo y el �ltimo n�mero impar ingresado.
///Ejemplo 8, 4,-5, 7, 9, 18, 5 se informa: Primer impar:-5, Segundo impar: 7,
///Ante�ltimo impar: 9 y �ltimo impar: 5.


/// Buscar Impar
/// Buscar primer impar
/// Buscar segundo impar
/// Buscar anteultimo impar
/// Buscar ultimo impar

#include <iostream>
using namespace std;

int main()
{
    int nro;
//    bool bPrimerImpar = true;
//    bool bSegundoImpar = true;

    int primerImpar;
    int segundoImpar;
    int anteUltimoImpar;
    int ultimoImpar;

    int contImpar = 0;

    for (int x=0; x<7; x++)
    {
        cout<<"Ingrese un numero: ";
        cin>>nro;

        if(nro % 2 != 0)  // Averiguamos si es impar
        {
            contImpar++;

            if(contImpar == 1)
            {
                primerImpar = nro;
            }
            else
            {
                if(contImpar == 2)
                {
                    segundoImpar = nro;
                }
            }

//            if(bPrimerImpar) // Primero impar
//            {
//                primerImpar = nro;
//                bPrimerImpar = false;
//            }
//            else
//            {
//                if(bSegundoImpar)
//                {
//                    segundoImpar = nro;
//                    bSegundoImpar = false;
//                }
//            }

            anteUltimoImpar = ultimoImpar; // Guardamos el ante ultimo impar
            ultimoImpar = nro;  // Asignamos el ultimo impar
        }
    }

    cout << endl;
    cout << "El primer n�mero impar fue: " << primerImpar << endl;

//    if(!bSegundoImpar) // Validamos si se ingreso un segundo n�mero impar
    cout << "El segundo n�mero impar fue: " << segundoImpar << endl;
//    else
//    cout << "No se ingres� un segundo impar" << endl;

    cout << "El ante�ltimo n�mero impar fue: " << anteUltimoImpar << endl;
    cout << "El �ltimo n�mero impar fue: " << ultimoImpar << endl;


    return 0;
}
