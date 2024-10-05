/*
Hacerunafunción llamada CalcularMaximo que determine el máximo entre
dos números. La función debe recibir dos números enteros por valor y devolver el valor más grande. Si los números son iguales debe devolver cualquiera de los dos. La función no debe mostrar nada por pantalla.
Hacer un programa para ingresar dos números y, utilizando CalcularMaximo, emita luego el número mayor de ambos.
*/

#include <iostream>
using namespace std;

int calcularMaximo(int a, int b)
{
//    int mayor;

    if(a > b)
    {
//        mayor = a;
        return a;
    }
//    else
//    {
//        mayor = b;
    return b;
//    }

//    return mayor;
//    return a > b; MAL
}

int main()
{
    int nro1, nro2, maximo;

    cout << "Ingrese dos numeros: ";
    cin >> nro1 >> nro2;

//    maximo = calcularMaximo(nro1, nro2);

//    cout << "El maximo es " << maximo << endl;

    cout << "El maximo es " << calcularMaximo(nro1, nro2) << endl;

    return 0;
}
