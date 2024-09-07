///12. Hacer un programa para ingresar una lista de 10 números e informar el máximo
///    de los negativos y el mínimo de los positivos.
///    Ejemplo: 5, 8, 12, 2,-10, 15,-20, 8,-3, 24. Máximo Negativo-3. Mínimo Positivo 2
/*

5
8
12
2
-10
15
-20
8
-3
24
*/


#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    // Variables
    int nro;
    int nroMax;
    int nroMin;
    bool bMaxNeg = true;
    bool bMinPos = true;

    for(int i = 0; i < 10; i++)
    {
        cout << "Ingrese un número: ";
        cin >> nro;

        if(nro > 0)   // Averigua si es positivo
        {
            if(bMinPos)   // Averigua primer positivo. Negamos contenido de la bandera
            {
                nroMin = nro;
                bMinPos = false;
            }
            else
            {
                if(nro < nroMin)    // Averigua si es el menor
                {
                    nroMin = nro;
                }
            }
        }// Fin de if positivo

        if(nro < 0) // Averiguamos si es negativo
        {
            if(bMaxNeg == true)    // Averiguamos si es el primer negativo
            {
                nroMax  = nro;
                bMaxNeg = false;
            }
            else
            {
                if(nro > nroMax)   // Averiguamos si es el mayor
                {
                    nroMax = nro;
                }
            }
        } // Fin If Negativo

    }      // Cierra el FOR

    cout << "El máximo negativo es: " << nroMax << endl;
    cout << "El mínimo positivo es: " << nroMin << endl;


    return 0;
}
