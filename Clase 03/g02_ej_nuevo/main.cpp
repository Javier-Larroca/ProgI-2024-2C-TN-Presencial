/*
    Hacer un programa para ingresar la edad de tres personas y luego
    emitir por pantalla el promedio de edad de aquellas personas mayores
    a 30 años
*/

#include <iostream>
using namespace std;

int main()
{
    int e1, e2, e3;
    int contMayor30 = 0;
    int acuMayor30 = 0;
    float promedioMayores30;

    cout << "Ingrese tres edades: ";
    cin >> e1 >> e2 >> e3;

    if(e1 > 30)
    {
        acuMayor30 = acuMayor30 + e1;
        contMayor30 = contMayor30 + 1;
    }

    if(e2 > 30)
    {
        acuMayor30 += e2;
        contMayor30++;
    }

    if(e3 > 30)
    {
        acuMayor30 = acuMayor30 + e3;
        contMayor30 = contMayor30 + 1;
    }


    if(contMayor30 > 0)
    {
        promedioMayores30 = (float)acuMayor30 / contMayor30;
        cout << "El promedio de edad de los mayores de 30 es de " << promedioMayores30 << endl;
    }
    else
    {
        cout << "No se ingresaron edad mayores a 30 años" << endl;
    }

    return 0;
}
